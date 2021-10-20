#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,*ptr,*nptr;
ptr=(int *)malloc(2*sizeof(int));
if(ptr==NULL)
{
 printf("insufficient memory\n");
 exit(1);
}
 for(i=0;i<2;i++)
{
 printf("enter the input\n");
 scanf("%d",&ptr[i]);
}
 for(i=0;i<2;i++)
{
 printf("%p\t%d\n",&ptr[i],ptr[i]);
}
nptr=(int *)realloc(ptr,4*sizeof(int));
if(nptr==NULL)
{
 printf("insufficent memory\n");
 exit(1);
}
 for(i=2;i<4;i++)
{
 printf("enter the input");
 scanf("%d",&nptr[i]);
}
 for(i=0;i<4;i++)
{
 printf("%p\t%d\n",&nptr[i],nptr[i]);
}
free(nptr);
}
