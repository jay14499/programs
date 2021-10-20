#include<stdio.h>
void display(int (*)[4],int ,int );
void uppertriangle(int (*)[4],int ,int );
void lowertriangle(int (*)[4],int ,int );
void diagnol(int (*)[4],int ,int );
int main()
{
 int i,j;
 int a[4][4];
 for(i=0;i<4;i++)
  {
  for(j=0;j<4;j++)
   {
    printf("enter a[%d][%d]:",i,j);
    scanf("%d",&a[i][j]);
   }
  }
 display(a,4,4);
 uppertriangle(a,4,4);
 lowertriangle(a,4,4);
 diagnol(a,4,4);
 }
 
void display(int (*ptr1)[4],int m,int n)
 {
  for(m=0;m<4;m++)
  {
    printf("\n");
   for(n=0;n<4;n++)
    {
     printf("%d ",ptr1[m][n]);
    }
  }
  printf("\n");
}

 
void uppertriangle(int (*ptr1)[4],int m,int n)
 {
  for(m=0;m<4;m++)
  {
    printf("\n");
   for(n=0;n<4;n++)
    {
     if(m<n)
     {
     printf("%d ",ptr1[m][n]);
     }
    else
     printf("0 ");
   }
 }
    printf("\n");
}

void lowertriangle(int (*ptr1)[4],int m,int n)
 {
  for(m=0;m<4;m++)
  {
    printf("\n");
   for(n=0;n<4;n++)
    {
     if(m>n)
     {
     printf("%d ",ptr1[m][n]);
     }
    else
     printf("0 ");
   }
 }
  printf("\n");
}

void diagnol(int (*ptr1)[4],int m,int n)
 {
  for(m=0;m<4;m++)
  {
    printf("\n");
   for(n=0;n<4;n++)
    {
     if(m==n)
     {
     printf("%d ",ptr1[m][n]);
     }
    else
     printf("0 ");
   }
 }
  printf("\n");
}
