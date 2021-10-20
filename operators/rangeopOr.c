#include<stdio.h>
int main()
{
 int x;
 printf("enter the value:");
 scanf("%d", &x);
 ((x<=1)||(x>=9))?printf("out of range\n"):printf("within the range\n");
}
