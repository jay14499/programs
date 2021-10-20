#include<stdio.h>
int main()
{
 int x=20;
 int *ptr;
 int **dptr;
 ptr=&x;
 printf("*ptr - %d\n",*ptr);
 printf("&ptr - %p\n",&ptr);
 
 dptr=&ptr;
 printf("size of dptr=%d\n",sizeof(dptr));
 printf("double pointer base address=%p\n",&dptr);
 printf("single pointer base adress=%p\n",dptr);
 printf("adress of variable %p\n",*dptr);
 printf("value stored in variable=%d\n",**dptr);
}
 
