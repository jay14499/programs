#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc, char *argv[])
 {
 
  int ret,fd1,fd2;
  char buf[10];
  if(argc!=3)
  {
	printf("invalid format of cat command\n");
	exit(1);
  }

  fd1=open(argv[1],O_RDONLY);
  if(fd1<0)
  {
	printf("failed to open the file\n");
	exit(2);
  }

  fd2=open(argv[2],O_CREAT|O_RDWR);
  if(fd2<0)
  {
	printf("failed to open the file\n");
	exit(3);
  }
  while(ret=read(fd1,buf,9)<0)
  {
	if(ret<0)
        {
		printf("fail to read\n");
                exit(3);
 	}
  write(fd2,buf,ret);
  buf[ret]='\0';
  }
  printf("%s\n",buf);
  close(fd1);
  close(fd2);
 }
