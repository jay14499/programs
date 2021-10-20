#include<stdio.h>
int main()
{
 int x=10, y=20, big;
 (x>y) ? printf("T\n") : printf("F\n");
 (x>y) ? printf("%d\n",x) : printf("%d\n",y);
 

 big=(x>y)?x:y;
 printf("%d\n",big);
}
