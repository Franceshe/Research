// Implementation of a primitive game ("sprites" move in one dimension)
// using a procedural style with APIs. This program will generate the
// following output:
//   player is at 0    missile is at 4    
//   player is at 0    missile is at 3    
//   player is at 0    missile is at 2    
//   player is at 0    missile is at 1    
//   player is at 0    missile is at 0    
//   BANG!!!!
//   YOU LOSE! THE MISSILE HIT YOU!

#include <iostream>
#include <vector>

class Sprite {
private:
    int location;
    int velocity;
    std::string name;
public:
    Sprite(std::string n, int loc, int vel) {
        location = loc;
        velocity = vel;
        name = n;
    }
    bool touching(Sprite& other) {
        return location == other.location;
    }
    void move() {
        location += velocity;
    }
    void show() {
        std::cout << name << " is at " << location << "    ";
    }
    void explode() {
        std::cout << "BANG!!!!" << std::endl;
    }
};

class Game {
private:
    std::vector<Sprite*>* sprites;
public:
    Game(std::vector<Sprite*>* init_sprites) : sprites(init_sprites) {}
    void run() {
        int n = sprites->size();
        for (int frame = 0; frame < 10; frame++) {
            // COLLISION DETECTION
            for (int i = 0; i < n; i++) {
                for (int j = i+1; j < n; j++) {
                    if ((*sprites)[i]->touching(*((*sprites)[j]))) {
                        (*sprites)[i]->explode();
                        end_game(false);
                        return;
                    }
                }
            }
            // UPDATE
            for (auto s : *sprites) {
                s->move();
            }
            // RENDER
            for (auto s : *sprites) {
                s->show();
            }
            std::cout << std::endl;
        }
        end_game(true);
        return;
    }
    void end_game(bool win) {
        if (win) {
            std::cout << "YOU WIN! THE MISSILE MISSED YOU!" << std::endl;
        } else {
            std::cout << "YOU LOSE! THE MISSILE HIT YOU!" << std::endl;
        }
    }
};

int main(int argc, char *argv[]) {
    std::vector<Sprite*> sprites;
    sprites.push_back(new Sprite("player", 0, 0));
    sprites.push_back(new Sprite("missile", 5, -1));
    Game game(&sprites);
    game.run();
}
