#include<stdio.h>
int main()
{
 int x=10;
 int y=20;
 int * const ptr;
 *ptr=20; //valid
 *ptr=30;
 //ptr=&x; invalid-the pointer is const i.e the ptr is read only we cannot modify the value
 printf("%d\n",*ptr);
}
