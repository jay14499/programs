#include<stdio.h>
int main()
{ 
 char ch;
 
 printf("enter value:");

 scanf("%c",&ch);

 //(ch>=65 && ch<=96)?printf("the entered value in uppercase\n"):((ch>=97 && ch<=122)?printf("%c value in lowercase\n"):((ch>48&&ch<=57)?printf("value is numeric\n"):printf("entered value is special character\n")));

(ch>='A' && ch<='Z')?printf("the entered value in uppercase\n"):((ch>='a' && ch<='z')?printf("value in lowercase\n"):((ch>='0' && ch<='9')?printf("value is numeric\n"):printf("entered value is special character\n")));

}

