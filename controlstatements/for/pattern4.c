#include<stdio.h>
int main()
{
 int i,j,k;
 for(j=0;j<5;j++)
{
  for(k=0;k<j;k++)  
       {  
           printf(" ");  
       }  

 for(i=j;i<5;i++)
{

 printf("*");
 
}

printf("\n");
}
}
