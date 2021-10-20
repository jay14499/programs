#include<stdio.h>
int main()
{
 int x,y,z,opt;

 printf("enter the inputs x,y:\n");
 scanf("%d-%d",&x,&y);
 printf("enter the operation\n");
 scanf("%d",&opt);
 
 switch(opt)
{
 case 0: exit(0); 
 case 1: z=x+y;
           printf("addition is %d",z);
           break;
 case 2: z=x-y;
           printf("subtraction is %d",z);
           break;
 case 3: z=x*y;
           printf("multiplication is %d",z);
           break;
 case 4: z=x/y;
           printf("division is %d",z);
           break;
 default :printf("invalid input");
}
}
