/*#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  int i,j,count;
  printf("enter the string:");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
   count=1;
   for(j=i+1;str[j]!='\0';j++)
   {
   if(str[i]==str[j])
   {
    count++;
    str[j]='1';
   }
   }
  if(str[i]!='1')
  printf("%c-%d\n",str[i],count);
  }
}*/



#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int i,j,count;
 printf("enter the string\n");
 //scanf("%s",&str[i]);
 gets(str);
 
 for(i=0;str[i]!='\0';i++);
 {
  count=1;
 
  for(j=i+1;str[j]!='\0';j++)
   {
   if(str[i]==str[j])
  {
  count++;
  str[j]='1';
    }
 }
  if(str[i]!='1')
    printf("%c-%d\n",str[i],count);
   }
}
