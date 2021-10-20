#include<stdio.h>
void reverse(char *,char*);
int main()
{
 char str[100],rev[100];
 printf("enter the string");
 scanf("%s",str);
 printf("%p-%s\n",str,str);
 reverse(str,rev);
 printf("%p-%s\n",rev,rev);
}

  void reverse(char *str, char *rev)
  {
   int i,j;
   char l=0;
 
   for(l=0;str[l] !='\0';l++);

   j = l - 1;
   for(i = 0; i < l; i++) 
   {
   rev[i] = str[j];
   j--;
   }

  printf("%p-%s\n",rev,rev);
   }





/*#include <stdio.h>
int main()
{
char str[1000], rev[1000];
int i, j;
char l = 0;
printf("enter the string\n");
scanf("%s", str);


for(l=0;str[l] !='\0';l++);

j = l - 1;

//reversing the string by swapping
for (i = 0; i < l; i++) 
{
rev[i] = str[j];
j--;
}

printf("%s\n",rev);
}*/





/*#include<stdio.h>
void rev(char *);
main()
{
 
 char str[20]="welcome";
 printf("%s",str);
 rev(str);
 printf("%s",str);
}

 void rev(char *str)
{
 int i,j;
 char *begin,*end,temp;
 begin=str;
 end=str;
 for()
{
 temp=*end;
 *end=*begin;
 *begin=temp;
}

}*/
