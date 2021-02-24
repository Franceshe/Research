#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

/**
using select() to see which network descriptors have incoming message
upon them
**/

int main(void){
    // open and set up  bunch of sockets(not shown)
    // main loop
    while(1){
	//initialize the fd_set to all zero
	fd_set readFDs;
	FD_ZERO(&readFDs);

	// now set the bits for the descriptors
	// this server is interested in
	// (for simplicity, all of them from min to max)
	int fd;
	for (fd = minFD, fd < maxFD; fd++)
	    FD_SET(fd, &readFDs);

	// do the select
	int rc = select(maxFD+1, &readFDs, NULL, NULL, NULL);

	// check which actually have data using FD_ISSET()
	int fd;
	for(fd = minFD; fd < maxFD; fd++)
	    if(FD_ISSET(fd, &readFDs))
		processFD(fd);
    }
}
