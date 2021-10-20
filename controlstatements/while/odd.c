#include<stdio.h>
int main()
{
 int x,min,max;


 printf("enter min-max");
 scanf("%d-%d",&min,&max);
 
 if(min%2==0)
 min++;
x=min;

 while(x<=max)
{
 printf("%d\t",x);
 x=x+2;
}
}

 
