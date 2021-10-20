#include<stdio.h>
#include<unistd.h>
int main()
{
 int x,y,z;
 z=x+y;
 printf("add :z=%d\n",z);
 printf("pid of add=%d\n",getpid());
 char *argv[]={"./mul",NULL};
 execv("./mul",argv);
}
