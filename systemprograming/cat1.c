#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc, char *argv[])
 {
 
  int ret,fd=0;
  char buf[10];
  if(argc!=2)
  {
	printf("invalid format of cat command\n");
	exit(1);
  }
  fd=open(argv[1],O_RDONLY);
  if(fd<0)
  {
	printf("failed to open the file\n");
	exit(2);
  }
  while(ret=read(fd,buf,9)<0)
  {
	if(ret<0)
        {
		printf("fail to read\n");
                exit(3);
 	}
  
  buf[ret]='\0';
  write(fd,buf,ret);
 
  }
   printf("%s\n",buf);
  close(fd);
 }
