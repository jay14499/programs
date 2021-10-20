#include<stdio.h>
int main()
{
 char x=20;
 char *ptr;
 char **dptr;
 ptr=&x;
 
 
 printf("size of variable x=%d\n",sizeof(x));
 dptr=&ptr;
 printf("size of dptr=%d\n",sizeof(dptr));
printf("*ptr - %d\n",*ptr);
 printf("adress stored in ptr=%p\n",ptr);
 printf("&ptr - %p\n",&ptr);
 printf("adress of variable %p\n",*dptr);
 printf("single pointer base adress=%p\n",dptr);
 printf("double pointer base address=%p\n",&dptr);


 printf("value stored in variable=%d\n",**dptr);
}
 
