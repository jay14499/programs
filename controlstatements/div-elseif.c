#include<stdio.h>
int main()
{
 int x;
 
 printf("enter the value:");
 
 scanf("%d",&x);
 
 if((x%5==0)&&(x%6==0))

 printf("given number is divisible by both 5 and 6\n");
 
 else 
  printf("given number is not divisible by 5 and 6\n");
}

