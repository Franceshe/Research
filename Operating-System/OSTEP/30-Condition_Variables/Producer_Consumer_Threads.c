#include <pthread.h>
#include <stdio.h>
#include "mythreads.h"

int buffer;
int count = 0; // initially, empty

void put(int value){
    assert(count == 0);  //assert the buffer is empty
    count = 1;
    buffer = value;
}

int get(){
    assert(count == 1);
    count = 0;          //set buffer as empty
    return buffer;
}

void *producer(void *arg){
    int i;
    int loops = (int) arg;
    for( i = 0; i < loops; i++){
	put(i);
    }
}

void *consumer(void *arg){
    int i;
    while(i){
	int tmp = get();
	printf("%d\n", tmp);
    }
}