#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,l;
 char *str[3];
 for(i=0;i<3;i++)
  {
   printf("enter the length of the string:\n");
   scanf("%d",l);
   str[i]=(char *)malloc((l+1)*sizeof(char));
  if(str==NULL)
   { 
    printf("insufficient memory");
    exit(0);
   }
   scanf("%s",&str[i]);
  }
 for(i=0;i<3;i++)
 {
 printf("adress of str[%d]:%p-string in str[%d]:%s",i+1,str[i],i+1,str[i]);
 }
 for(i=0;i<3;i++)
 {
  free(str[i]);
 }
}
