#include<stdio.h>
int main()
{
 int x=10;
 int pid;
 pid=fork();
 if(pid!=0)
 {
  sleep(10);
  x=30;
  printf("parent process:%d(x)-%p(address)\n",x,&x);
  printf("parent process\n");
  printf("parent process\n");
  printf("parent process\n");
  printf("parent process:%d(pid)-%d(ppid)\n",getpid(),getppid());
}
 else
  {
   sleep(20);
   printf("child process:%d(x)-%p(address)\n",x,&x);
   printf("child process\n");
   printf("child process\n");
   printf("child process\n");
   printf("child process:%d(pid)-%d(ppid)\n",getpid(),getppid());
}
}
