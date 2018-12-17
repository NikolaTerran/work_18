#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


int main(){
	int fd;
	mkfifo("luigi",0644);
	printf("ok\n");				//blocking?
	fd = open("luigi", O_RDONLY); //quit?
	printf("opened: %d\n",fd);
	
	return 0;
}
