#include<stdio.h>
#include<stdlib.h>
#define N 5
int status=0;
void read(int *,int);
void display(int *,int);
main()
{
 int opt, *ptr;
 void (*f_gen)(int *,int);
 while(1)
 {
  printf("menu 0.exit\n1.read\n2.display\n");
  scanf("%d",&opt);
  ptr=(int *)malloc(N*sizeof(int));
  switch(opt)
   {
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

 void read(int *,int)
  {
  int x;
  scanf("%d",&x);
   }
 void display(int *,int)
  {
int x;
   printf("%d",x);
  }
   
