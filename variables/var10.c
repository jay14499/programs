#include<stdio.h>
int x=10;
main()
{
x=20;
int y=10;
{
 y=30;
printf("%d-%d\n",x,y);
printf("%p-%p\n",&x,&y);
 int z;
z=20;
}
printf("%d-%d\n",x,y);
printf("%p-%p\n", &x,&y);
}
