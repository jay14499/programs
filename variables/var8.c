#include<stdio.h>
int x=0;
main()
{
 printf("%p-%d\n",&x, x);
x=30;
int x=20;
printf("%p-%d\n", &x,x);
x=40;
{

int x=50;
printf("%p-%d\n", &x,x);
x=60;
}
printf("%p-%d\n", &x,x);
}
