#include<stdio.h>
#include<stdlib.h>
#define N 5
void read(int *ptr,int n);
void display(int *ptr,int n);
main()
{
 int *ptr=(int *)malloc(N*sizeof(int));
 if(ptr==NULL)
  {
   printf("insufficient memory\n");
   exit(1);
 }
 read(ptr,N);
 display(ptr,N);
 free(ptr);
}
 void read(int *ptr,int n)
{
 int i;
 for(i=0;i<n;i++)
{
 printf("enter the input\n");
 scanf("%d",&ptr[i]);
 }
}
 
 void display(int *ptr,int n)
{
 int i;
 for(i=0;i<n;i++)
{
 printf("%p-%d\n",&ptr[i],ptr[i]);
}
}
