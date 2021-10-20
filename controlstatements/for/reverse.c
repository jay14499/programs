#include<stdio.h>
int main()
{
 int x,num=0,rev=0,temp=0;
 printf("enter a number:");
 scanf("%d",&x);
 
 for(num=x;num>0;num=num/10)
  {
  temp=num%10;
  rev=rev*10+temp;
 
 
   }
   printf("reverse of %d is %d\n",x,rev);
  }
