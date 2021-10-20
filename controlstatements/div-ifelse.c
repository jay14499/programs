#include<stdio.h>
int main()
{
 int x;

 printf("enter the value:");

 scanf("%d",&x);

 if((x%5==0)&&(x%6==0))
   
   printf("%d is divisible by both 5 and 6\n",x);
    
 	else
         
         printf("%d is not divisible by both 5 and 6\n", x);
          
}


