// The same program as in game1.cc, but with a message-passing style.

#include <iostream>
#include <vector>

// Simple message-passing mechanism.
class Notified {
public:
    Notified() {}
    virtual void receive(std::string msg, int info) {}
};

class Notifier {
private:
    std::vector<Notified*> notification_list;
    int id_counter;
public:
    Notifier() : id_counter(0) {};
    int observe(Notified* n) {
        notification_list.push_back(n);
        return id_counter++;
    }
    void broadcast(std::string msg, int info) {
        for (auto n : notification_list) {
            n->receive(msg, info);
        }
    }
    void send(int id, std::string msg, int info) {
        if (id >= 0 && id < notification_list.size()) {
            notification_list[id]->receive(msg, info);
        }
    }
};

// Now, the game, reimplemented to use message passing.

static Notifier *global_notifier;

class Sprite : public Notified {
private:
    int location;
    int velocity;
    std::string name;
public:
    Sprite(std::string n, int loc, int vel) {
        name = n;
        location = loc;
        velocity = vel;
        global_notifier->observe(this);
    }
    void receive(std::string msg, int info) {
        if (msg == "move") {
            location += velocity;
            if (location < -1) {
                global_notifier->broadcast("miss", location);
            }
        }
        else if (msg == "show") {
            std::cout << name << " is at " << location << "    ";
        }
        else if (msg == "explode") {
            if (name == "player") {
                std::cout << "BANG!!!!" << std::endl;
            }
        }
        else if (msg == "check touching") {
            if (name == "missile") {
                global_notifier->broadcast(name + " at", location);
            }
        }
        else if (msg == "missile at") {
            if (name == "player" && location == info){
                global_notifier->broadcast("hit", 0);
            }
        }
    }
};

class Game : public Notified {
private:
    bool running;
public:
    Game() {
        global_notifier->observe(this);
    }
    void run() {
        running = true;
        for (int frame = 0; frame < 10; frame++) {
            // COLLISION DETECTION
            global_notifier->broadcast("check touching", 0);
            if (running) {
                // UPDATE
                global_notifier->broadcast("move", 0);
                // RENDER
                global_notifier->broadcast("show", 0);
                std::cout << std::endl;
            } else {
                return;
            }
        }
        global_notifier->broadcast("miss", 0);
        return;
    }
    void receive(std::string msg, int info) {
        if (msg == "hit") {
            global_notifier->broadcast("explode", info);
            std::cout << "YOU LOSE! THE MISSILE HIT YOU!" << std::endl;
            running = false;
        }
        else if (msg == "miss") {
            std::cout << "YOU WIN! THE MISSILE MISSED YOU!" << std::endl;
            running = false;
        }
    }
};

int main(int argc, char *argv[]) {
    global_notifier = new Notifier();
    Sprite player("player", 0, 0);
    Sprite missile("missile", 5, -1);
    Game game;
    game.run();
}
