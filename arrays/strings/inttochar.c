#include<stdio.h>
#include<string.h>
int main()
{
 int x=123;
 int i,a,sum=0;
 char str[10];
 int temp;
 for(a=x;a>0;a=a/10)
 {
 temp=a%10;
 sum=sum*10+temp;
 printf("%c\n",sum);
 }
 printf("%d\n",sum);
}
