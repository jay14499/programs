#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
 {
  int fd1,fd2,fd3;
  fd1=open("1.txt",O_CREAT|O_TRUNC|O_WRONLY,0777);
  if(fd1<0)
  {
	printf("failed to open the file\n");
	exit(1);
  }
  printf("fd1=%d\n",fd1);
  close(fd1);
 }
