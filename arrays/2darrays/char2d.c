#include<stdio.h>
int main()
{
 int i;
 char str[3][32];
 printf("adress of str[0]:%p-size of str[0]:%d\n",str[0],sizeof(str[0]));
 printf("adress of str[1]:%p-size of str[1]:%d\n",str[1],sizeof(str[1]));
 printf("adress of str[2]:%p-size of str[2]:%d\n",str[2],sizeof(str[2]));
 printf("adress of str:%p-size of str:%d\n",str,sizeof(str));
 
 for(i=0;i<3;i++)
  {
   printf("adress of str[%d]:%p-size of str[%d]:%d\n",i+1,str[i],i+1,sizeof(str[i]));
  }
 for(i=0;i<3;i++)
  {
   printf("enter the string constant %d:",i+1);
   scanf("%s",str[i]);
  }
  for(i=0;i<3;i++)
  {
   printf("adress of str[%d]:%p-string in str[%d]:%s\n",i+1,str[i],i+1,str[i]);
  }
}

