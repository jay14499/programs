#include<stdio.h>
int main()
{
 const int x=10;
 x=20;//x is now read only memory so we cant over write it, it generates compilation error 
 printf("%d\n",x);
}
