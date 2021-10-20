#include<stdio.h>
char* reverse(char* );
void main()
{
    int i;
    char str[100];
    char *rev;
    printf("Enter the string:\t");
    scanf("%s", str);
    printf("The original string is: %s\n", str);
    rev = reverse(str);
    printf("The reversed string is: %s\n", rev);
    
}


char* reverse(char *str)
{
    static int i = 0;
    static char rev[100];
    if(*str)
    {
        reverse(str+1);
        rev[i++] = *str;
    printf("The reversed string is: %s\n", rev);
    }
    return rev;
}





/*#include<stdio.h>
char* reverse(char *str);
void main()
{
 int i;
 char *rev;
 char str[100];
 printf("enter the string");
 scanf("%s",str);
 printf("%p-%s\n",str,str);
 rev=reverse(str);
 printf("%p-%s\n",rev,rev);
 
 
}

char* reverse(char *str)
{
  int i;
  char rev[100];
   if (*str)
   {
       reverse(str+1);
       rev[i++]=*str;
       printf("%s\n", *rev);
   }
   return rev;
}*/

