#include<stdio.h>
int x; //unintialised global variable
main()
{
 int y; //uninitialised local variable
y=20;  
x=10;
printf("%d-%d\n",x,y);
}

