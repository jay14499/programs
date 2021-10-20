#include<stdio.h>
int main()
{
 int x=10,*ptr;
 
 printf("%d\n",sizeof(x));
 printf("%p-%d\n",&x,x);
 ptr=&x;
 printf("%d\n",sizeof(ptr));
 printf("%p-%p\n",ptr,&ptr);
 *ptr=20;
 printf("%d\n",sizeof(*ptr));
 printf("%d\n",*ptr);
}
