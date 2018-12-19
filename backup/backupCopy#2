#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(){
	int fd;
	//mkfifo("luigi",0644);
	printf("ok\n");				  //blocking?
	fd = open("luigi", O_WRONLY); //quit?
	printf("opened: %d\n",fd);
	char* buffer;
	
	while(1){
		buffer = malloc(256);
		scanf("%s",buffer);
		write(fd,buffer,256);
		//printf("%s\n",buffer);
		free(buffer);
	}
	return 0;
}
