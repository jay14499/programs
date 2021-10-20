#include<stdio.h>
int main()
{
 int x=10;
 int y=20;
 const int *const ptr=&x;
 //ptr=&y; invalid we cant assign the asdress to cont data
 //*ptr=20;invalid- we cant assign value to const pointer
 printf("%p-%d\n",ptr,*ptr);
}
