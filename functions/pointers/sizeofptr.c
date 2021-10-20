#include<stdio.h>
int main()
{
 int x=20;
 int *ptr;
 ptr=&x;
 
 printf("size of x-%d\n",sizeof(x));
 printf("adress of x-%p\n",x);

 printf("size of &x-%d\n",sizeof(&x));
 printf("adress of &x-%p\n",&x);


 printf("size of ptr-%d\n",sizeof(ptr));
 
 printf("adress of ptr-%p\n",ptr);
 
 printf("size of *ptr-%d\n",sizeof(*ptr));
}
 
