#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdint.h>
int main()
{
 pid_t pid;
 pid=fork();
 if(pid==0)
 {
	printf("child process: %d\n",pid);
 }
 else
 {
	printf("parent process: %d\n",pid);
 }
}
