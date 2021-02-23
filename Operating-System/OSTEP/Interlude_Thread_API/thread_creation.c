#include <pthread.h>

//posix

/**Arguments:
1. thread: a pointer to a structure of type pthread_t 
2. attr:   is used to specify any attributes this thread might have. For example, stack size or scheduling priority of the thread.
3. start_routine: indicatess which function should this thread start running in? -> Called "Function pointer" in C.
4. arg: exactly the argument to be passed to the function where the thread begins execution

Q:why do we need these void pointers?
A:having a void pointer as an argument to the function start routine allows us to pass in any type of argument; having it as a return value allows the thread to return any type of result
 **/

int pthread_create( pthread_t * thread,
		    const pthread_attr_t * attr.
		    void * (*start_routine)(void*),
		    void * arg);
)


typedef struct __myarg_t {
    int a;
    int b;
} myarg_t;

void *mythread(void *arg){
    myarg_t *m = (myarg_t *)arg;
    printf("%d %d\n", m->a, m->b);
    return NULL;
}

int main(int argc, char *argv[]){
    pthread_t p;
    int rc;

    myarg_t args;
    args.a = 10;
    args.b = 20;
    rc = pthread_create(&p, NULL, mythread, &args);
    
}
