#include<stdio.h>
int main()
{
 int i,j;
 int a[3][3],b[3][3],c[3][3];
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
    printf("enter the element a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);
   }
  }
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("enter the element b[%d][%d]=",i,j);
    scanf("%d",&b[i][j]);
   }
  }
  for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    }
   }
   for(i=0;i<3;i++)
    {
     printf("\n");
     for(j=0;j<3;j++)
      {
         printf("%d ",c[i][j]);
        }
     }
}
