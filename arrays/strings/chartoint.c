#include<stdio.h>
#include<string.h>
int main()
{
 char str[]="133";
 int i,j,l,sum,temp;

 //printf("enter character\n");
 //scanf("%s",&str[i]);
 l=strlen(str);
 
 for(i=0;i<l;i++);
 {
 sum=0;
 temp=str[i]-48;
 sum=sum*10+temp;
 printf("%s\n",sum);
 }
 printf("%s\n",sum);
}
