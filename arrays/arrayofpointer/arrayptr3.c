#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j;
 int *ptr[2];
 for(i=0;i<2;i++)
  {
 ptr[i]=(int *)malloc(3*sizeof(int));
  }
 printf("enter th elements\n");
 for(i=0;i<2;i++)
  {
   for(j=0;j<3;j++)
    {
     scanf("%d",&ptr[i][j]);
    }
  }
 for(i=0;i<2;i++)
  {
   for(j=0;j<3;j++)
    {
     printf("%d\n",ptr[i][j]);
    }
  }

 for(i=0;i<2;i++)
 {
 free(ptr[i]);
 }
}
