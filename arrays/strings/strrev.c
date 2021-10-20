#include <stdio.h>
#include <string.h>
int main()
{
  int i,n;
   char s[100];
   printf("enter size of string");
   scanf("%d",&n);
   printf("Enter a string to reverse\n");
   for(i=0;i<n;i++)
   {
   scanf("%s",&s[i]);
   }

   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}
