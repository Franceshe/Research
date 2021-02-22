#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("location of code : %p\n", (void *)main);
    printf("location of heap : %p\n", (void *) malloc(1));
    int x = 3;
    printf("location of stack : %p\n", (void *) &x);
    return x;
}


/*
output:
location of code : 0x107d63ec0
location of heap : 0x7faa2cc05b00
location of stack : 0x7ffee7e9f28c


*/
