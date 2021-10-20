#include<stdio.h>
#include<string.h>
int main()
{
 char a[100],temp;
 int i,j,l;
 printf("enter the string\n");
 scanf("%s",&a[i]);

 l=strlen(a); 

 for(i=0;i<l;i++)
  {
   for(j=i+1;j<l;j++)
    {
    if(a[i]>a[j])
     {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
     }
    }
  }
  printf("%s\n",a);
} 
