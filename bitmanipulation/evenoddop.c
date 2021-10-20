#include<stdio.h>
int main()
{
 int num;
 printf("enter number:");
 scanf("%d",&num);
 ((num&1)==1)?printf("%d is odd\n",num):printf("%d is even\n",num);
}
