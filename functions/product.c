#include<stdio.h>
int product(int, int);
main()
{
 int x=10,y=5,res;
printf("main:x-(address)->%p-%d\n",&x,x);
printf("main:y-(address)->%p-%d\n",&y,y);
res=product(x,y);
printf("main:res-(address)->%p-%d\n",&res,res);
}
int product(int x,int y)
{
 int res;
 printf("main:x-(address)->%p-%d\n",&x,x);
 printf("main:y-(address)->%p-%d\n",&y,y);
 res=x*y;
 printf("main:res-(address)->%p-%d\n",&res,res);
 return res;
}
