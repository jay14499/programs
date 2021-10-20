#include<stdio.h>
#include<stdlib.h>
int main()
{
int *nptr,i;
int *ptr=(int *)malloc(2*sizeof(int));
for(i=0;i<2;i++)
{
 scanf("%d",&ptr[i]);
}
 nptr=(int *)realloc(ptr,4*(sizeof(int)));
 for(i=2;i<4;i++)
{
 scanf("%d",&nptr[i]);
}
for(i=0;i<4;i++)
{
 printf("%p-%d\n",&ptr[i],nptr[i]);
}
}
