
/**
Producer/Consumer: Single CV and If Statement
(broken) first try
**/
cond_t cond;
mutex_t mutex;

void *producer(void *arg){
    int i;
    for(i = 0; i < loops; i++){
	pthread_mutex_lock(&mutex);            //p1
	if(count == 1)                         //p2
	    pthread_cond_wait(&cond, &mutex);  //p3
	put(i);                                //p4
	pthread_cond_signal(&cond);            //p5
	pthread_mutex_unlock(&mutex)           //p6
    }
}

void *consumer(void *arg){
    int i;
    for(int i = 0; i < loops; i++){
	pthread_mutex_lock(&mutex);            // c1
	if (count == 0)                        // c2
	    pthread_cond_wait(&cond, &mutex);  // c3
	int tmp = get();                       // c4
	pthread_cond_signal(&cond);            // c5
	pthead_mutex_unlock(&mutex);           //c6
	printf("%d\n", tmp);
    }
}
