//UDP server code 
int main(int argc, char *argv[]){
    int sd = UDP_Open(10000);
    assert(sd > -1);
    while(1){
        struct sockaddr_in s;
        char buffer[BUFFER_SIZE];
        int rc = UDP_READ(sd, &s, buffer, BUFFER_SIZE);
        if(rc > 0){
            char reply[BUFFER_SIZE];
            sprintf(reply, "reply");
            rc = UDP_Write(sd, &s, reply, BUFFER_SIZE);
        }    
    }
    return 0;
}