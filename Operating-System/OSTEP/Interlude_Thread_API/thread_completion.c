#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <pthread.h>

/* wait for a thread to completion*/
// pthread_join()

int pthread_join(pthread_t thread, void **value_ptr);

typedef struct __myarg_t {
    int a;
    int b;
} myarg_t;

typedef struct __myret_t {
    int x;
    int y;
}myret_t;

void *mythread(void *arg){
    myarg_t *m = (myarg_t *) arg;
    printf("%d %d\n", m->a, m->b);
    myret_t *r = Malloc(sizeof(myret_t)); //notice allocated on headp instead of stack
    r->x = 1;
    r->y = 2;
    return (void *)r;
}

int main(int argc, chaarr *argv[]){
    int rc;
    pthread_t p;
    myret_t *m;

    myarg_t args;
    args.a = 10;
    args.b = 20;
    Pthread_create(&p, NULL, mythread, &args);
    Pthread_join(p, (void **) &m);
    printf("returned %d %d\n", m->x, m->y);
    return 0;
}
