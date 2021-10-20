#include<stdio.h>
#include<stdlib.h>
void display(int (*)[],int (*)[],int ,int );
void product(int (*)[],int (*)[],int (*)[],int ,int );
int main()
{
 int i,j;
 int (*a)[3]=(int (*)[])malloc(3*3*sizeof(int));
 int (*b)[3]=(int (*)[])malloc(3*3*sizeof(int));
 int (*c)[3]=(int (*)[])malloc(3*3*sizeof(int));
 if(a==NULL && b==NULL)
 {
  printf("insufficient memory\n");
  exit(0);
 }
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   { 
   printf("enter a[%d][%d]=",i,j);
   scanf("%d",&a[i][j]);
   }
  }
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   { 
   printf("enter b[%d][%d]=",i,j);
   scanf("%d",&b[i][j]);
   }
  }
display(a,b,3,3);
product(a,b,c,3,3);
}

void display(int (*ptr1)[3],int(*ptr2)[3],int m,int n)
{
  int i,j;
  for(i=0;i<m;i++)
  {
   printf("\n");
   for(j=0;j<n;j++)
   { 
   printf("%d ",ptr1[i][j]);
   }
  }
 printf("\n");
  for(i=0;i<m;i++)
  {
  printf("\n");
   for(j=0;j<n;j++)
   { 
    printf("%d ",ptr2[i][j]);
   }
  }
 printf("\n");
}
 void product(int (*ptr1)[3],int(*ptr2)[3],int (*ptr3)[3],int m,int n)
{
  int i,j,k;
  for(i=0;i<m;i++)
  {
  printf("\n");
   for(j=0;j<n;j++)
   { 
    for(k=0;k<n;k++)
    {
      ptr3[i][j]=ptr3[i][j]+ptr1[i][k]*ptr2[k][j];
    }
   printf("%d ",ptr3[i][j]);
   }
  }
 printf("\n");
}
