#include<stdio.h>
int main()
{
 int i,j;
 int arr[8]={10,20,30,40,50,60,70,80};
 int (*ptr)[8];
 ptr=&arr;
 
 printf("size of ptr[0]=%d\n",sizeof(ptr[0]));
 printf("address of ptr[0]=%p\n",ptr[0]);
 printf("adress of ptr[1]=%p\n",ptr[1]);
 printf("size of ptr[1]=%d\n",sizeof(ptr[1]));

 for(i=0;i<2;i++)
 {
  for(j=0;j<4;j++)
   {
    printf("%p-%d\n",&ptr[i][j],ptr[i][j]);
   }
 }
}
