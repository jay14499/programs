#include<stdio.h>
#include<stdlib.h>
void display(int (*)[],int ,int );
void transpose(int (*)[],int (*)[],int ,int );
int main()
{
 int i,j;
 int (*a)[3]=(int (*)[])malloc(3*3*sizeof(int));
 int (*b)[4]=(int (*)[])malloc(3*3*sizeof(int));
 if(a==NULL && b==NULL)
 {
  printf("insufficient memory\n");
  exit(0);
 }
 for(i=0;i<3;i++)
  {
   for(j=0;j<4;j++)
   { 
   printf("enter a[%d][%d]=",i,j);
   scanf("%d",&a[i][j]);
   }
  }
display(a,3,4);
transpose(a,b,3,4);
}

void display(int (*ptr)[3],int r,int e)
 {
   int i,j;
   for(i=0;i<r;i++)
  {
   printf("\n");
   for(j=0;j<e;j++)
   {  
   printf("%d ",ptr[i][j]);
   }
  }
  printf("\n");
 }
void transpose(int (*A)[3],int (*AT)[4],int r,int e)
 {
   int i,j;
   for(i=0;i<e;i++)
  {
   printf("\n");
   for(j=0;j<r;j++)
   {  
   AT[i][j]=A[j][i];
   printf("%d ",AT[i][j]);
   }
  }
  printf("\n");
 }
