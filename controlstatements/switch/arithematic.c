#include<stdio.h>
#include<stdlib.h>
int main()
{
 int opt=0,x=3,y=5,z=0;

 while(1)
  {
  printf("select the option\n 0.exit\n 1.addition\n 2.subtraction\n 3.multiplication\n");
  scanf("%d",&opt);
 
 switch(opt)
    {
     case 0:exit(0);
            
     case 1: z=x+y;
             printf("addition is %d+%d=%d\n",x,y,z);
             break;
     case 2: z=x-y;
            printf("subtraction is %d-%d=%d\n",x,y,z);
             break;
     case 3: z=x*y;
             printf("multiplication is %d*%d=%d\n",x,y,z);
             break;
     default:printf("invalid input\n");
     }
  } 
}
  
