#include<stdio.h>
int main()
{
 int *ptr[2];
 int x=10;
 int y=20;
 ptr[0]=&x;
 ptr[1]=&y;
 printf("%d\n",sizeof(ptr));
 printf("%p\n",ptr);
 printf("%p-%d\n",ptr[0],*ptr[0]);
 printf("%d-%d\n",sizeof(ptr[0]),sizeof(*ptr[0]));
 printf("%p-%d\n",ptr[1],*ptr[1]);
}
