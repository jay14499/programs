#include<stdio.h>
int main()
{
 int i;
 int a[5]={10,20,30,40,50};
 int (*ptr)[5];
 ptr=a;
 for(i=0;i<5;i++)
 {
 printf("%d element is %d\n",i+1,ptr[0][i]);
 }
 printf("size of ptr- %d\n",sizeof(ptr));
 printf("size of ptr[0]=%d\n",sizeof(ptr[0]));
 printf("size of ptr[0][0]= %d\n",sizeof(ptr[0][0]));
}
