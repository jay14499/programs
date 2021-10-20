#include<stdio.h>
int main()
{
 char ch;
 printf("enter the value:");
 scanf("%c",&ch);

 if(ch>='a' && ch<='z')
  printf("%c is lowercase\n",ch);

    else if(ch>='A' && ch<='Z')
      printf("%c is uppercase\n",ch);

        else if(ch>='0'&& ch<='9')
          printf("%c is numeric\n",ch);

            else
              printf("given value is special character\n");
}
