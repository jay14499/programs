#include<stdio.h>
int x,y;
main()
{
 x=10;
 y=20;
 printf("%p-%d-%p-%d\n",&x,x,&y,y);
 swap();
 printf("%p-%d-%p-%d\n",&x,x,&y,y);
}
 void swap()
{
 int temp;
 temp=x;
 x=y;
 y=temp;
 }
