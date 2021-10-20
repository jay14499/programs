#include<stdio.h>
int x=20, y=10; //global variables
main()
{
 x=20;  //local variables
y=10;
{
y=30;
printf("%p-%p-%d-%d\n",x,y,&x,&y);
int z=5;
z=20; 
}
printf("%d-%d\n", x,y);
} 
