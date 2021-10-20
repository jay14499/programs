#include<stdio.h>
#include<stdlib.h>
void display(int *,int);
main()
{
 int i;
 void (* f_display)(int *,int);
 int *ptr=(int *)malloc(5*sizeof(int));
 if(ptr==NULL)
 {
  printf("insufficient memory\n");
  exit(1);
 }
 
 for(i=0;i<5;i++)
  {
   printf("enter the input\n");
   scanf("%d",&ptr[i]);
  }
 f_display=display;
 f_display(ptr,5);
 free(ptr);
 }
void display(int *ptr, int n)
{
 int i=0;
 for(i=0;i<n;i++)
{
 printf("%d\n",ptr[i]);
}
}
