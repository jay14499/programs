#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
int main()
 {
  int fd1,fd2;
  char buf[20]="jay";
  /*fd1=open("1.txt",O_RDWR);
  if(fd1<0)
  {
	printf("failed to open the file\n");
	exit(1);
  }*/
  printf("fd1=%d\n",fd1);
  fd2=fcntl(fd1,F_GETFD);
  write(fd2,buf,strlen(buf));
  printf("fd2=%d\n",fd2);
}
