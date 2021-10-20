#include<stdio.h>
#include<stdlib.h>
#define N 5
int status=0;
void read(int *,int);
void display(int *,int);
int main()
{
 int opt,i;
 int *ptr;
void (*f_gen)(int *,int);
ptr=(int *)malloc(N*sizeof(int));
while(1)
{
 printf("menu\n1.read\n2.display\n");
 scanf("%d",&opt);

 switch(opt){
 case 0:exit(0);
 case 1:f_gen=read;
        f_gen(ptr,N);
        status=1;
        break;
 case 2:if(status==0)
         {
          printf("read the data first\n");
          break;
         }
         f_gen=display;
         f_gen(ptr,N);
         break;
 default:printf("invalid option\n");
}
}
}
void read(int *ptr,int n)
{
int i;
 for(i=0;i<n;i++)
 {
 printf("enter %d element",i+1);
 scanf("%d",&ptr[i]);
}
}
void display(int *ptr,int n)
{
 int i;
 for(i=0;i<n;i++)
{
 printf("%d\n",ptr[i]);
}
}
