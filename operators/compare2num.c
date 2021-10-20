#include<stdio.h>
int main()
{
 int x,y;
 printf("enter the two values:");
 scanf("%d%d",&x,&y);
 (x>y)?printf("%d\n",x+y):printf("%d\n",x-y);
}
