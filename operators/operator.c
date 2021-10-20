#include<stdio.h>
int main()
{
 int x=10;
 int y=20;
 // x=y; y=x;

 //printf("%d-%d\n",x,y); // this statement prints 20-20 as output coz the values assigned outside the print function

 printf("%d-%d\n",x=y,y=x); //this statement prints 10-10 as output print() evaluates from right to left

}

