#include <stdio.h>
#include <pthread.h>
#include "mythreads.h"

/* 
Why thread make things worse: Sharing Data
*/
static volatile int counter = 0;

//
// my thread()
//
// Simply adds 1 to counter repeatedly, in a loop
// No, this is not how you would add 10, 000, 000 to
// a counter, but it show the problem nicely.

void * mythread(void *arg)
{
    printf("%s: begin\n", (char *) arg);
    int i;
    for (i = 0; i < 1e7; i++){
	counter = counter + 1;
    }
    printf("%s: done\n", (char *)arg);
    return NULL;
}


//
// main()
// Just launches two threads (pthread_create)
// and then waits for them   (pthread_join)
int main(int argc, char *argv[])
{
    pthread_t p1, p2;
    printf("main: begin(counter = %d)\n", counter);
    Pthread_create(&p1, NULL, mythread, "A");
    Pthread_create(&p2, NULL, mythread, "B");
	
    // join waits for the threads to finish
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    printf("main: done with both (counter = %d)\n", counter);
    return 0;

}
