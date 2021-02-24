#include <stdio.h>
#include <signal.h>

void handle(int arg){
    printf("stop wakin me up...\n");
}

int main(int argc, char *argv[]){
    signal(SIGHUP, handle);
    while(1)
	; // doing nothing except catching some sigs
    return 0;
}

// more on signals, check ref:Stevens and Rago [SR05]
/**
[SR05] “Advanced Programming in the UNIX Environment”
W. Richard Stevens and Stephen A. Rago
Addison-Wesley, 2005
 **/
