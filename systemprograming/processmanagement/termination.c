#include<stdio.h>
#include<stdlib.h>
int main()
{
 int pid,status;
 pid=fork();
 if(pid==0)
 {
	printf("1 child-%d---%d\n",getpid(),getppid());
	sleep();
	printf("1-child is terminated-%d--%d\n",getpid(),getppid());
	exit(0);
 }
 else
  {
	printf("parent-%d---%d\n",getpid(),getppid());
	pid=fork();
	if(pid==0)
	{
         printf("2 child-%d---%d\n",getpid(),getppid());
         sleep(0);
         printf("2 child is terminated-%d---%d\n",getpid(),getppid());
 	exit(20);
  }
 printf("parent is waiting for child---\n");
 pid=wait(&status);
 printf("parent:terminated child->pid=%d-it exit code->%d\n",pid,WEXITSTATUS(status));
 printf("parent is waiting for child---\n");
 pid=wait(&status);
 printf("parent:terminated child->pid=%d-it exit code->%d\n",pid,WEXITSTATUS(status));
 printf("parent is terminated-%d---%d\n",getpid(),getppid());
 }
}
