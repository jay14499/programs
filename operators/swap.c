#include<stdio.h>
int main()
{ 
 int x,y,temp;
 
 printf("enter x,y values:");
 scanf("%d%d",&x,&y);
  { 
   x=x+y;
   y=x-y;
   x=x-y;
   printf("%d-%d\n",x,y);
  } 
  {
   temp=x;
   x=y;
   y=temp;
   printf("%d-%d\n",x,y);
  }
 }
 
