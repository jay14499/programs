#include<stdio.h>
int main()
{
 int x;
 printf("enter the input:");
 scanf("%d",&x);
 ((x>=1)&&(x<=9))?printf("within the range\n"):printf("not in the range\n");
}
