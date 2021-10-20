#include<stdio.h>
int main()
{
 int x;
 printf("enter the value of x:");
 scanf("%d", &x);
 printf("x=%d\n",x);
 printf("++x=%d\n",++x);// prefix increment the value of x increased by 1
 printf("x=%d\n",x);    // the prefix increment value stored in x
 printf("--x=%d\n",--x);//prefix decrement the value of x decremented by 1
 printf("x=%d\n", x);
 return 0;
}

 
