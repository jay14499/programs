#include<stdio.h>
int main()
{
 int i,j;
 int *ptr[2];
 int arr1[2]={10,20};
 int arr2[2]={30,40};
 ptr[0]=arr1;
 ptr[1]=arr2;
 
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
    printf("%p-%d\n",&ptr[i][j],ptr[i][j]);
   }
 }
}
