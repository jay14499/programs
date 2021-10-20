#include<stdio.h>
int main()
{
 char ch;

 printf("enter character:");
 scanf("%c",&ch);

 if((ch>='a')&&(ch<='z'))
 printf("%c is lowercase\n",ch);

 if((ch>='A')&&(ch<='Z'))
 printf("%c is uppercase\n",ch);

 if((ch>='0')&&(ch<='9'))
 printf("%c is numeric\n",ch);

 if((ch!=((ch>='a')&&(ch<='z'))) && (ch!=((ch>='A')&&(ch<='Z'))) && (ch!=((ch>='0')&&(ch<='9'))))
 printf("given value is special character\n");

 }

