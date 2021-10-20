#include<stdio.h>
#include<string.h>
main()
{
 char str[100];
 char a[100];
 int i=0,j=0,l,count=0;
 printf("enter the string\n");
 scanf("%[^\n]s",&str[i]);
 printf("enter string to be searched\n");
 scanf("%s",&a[j]);
 l=strlen(a);
 while(str[i]!='\0')
 {
   if(str[i]==a[j])
    {
    while(str[i]==a[j] && str[i]!='\0')
    {
     i++;
     j++;
    }
     if(i=l &&(str[i]==' '|| a[j]=='\0'))
      {
      count++;
       } 
      }  
        else
         {
         while(str[i] != ' ')
         {        
            i++;
            if(str[i] == '\0')
            break;
         }
      }
		
      i++;
      j=0; 
   }

   if(count > 0) {
      printf("'%s' appears %d time(s)\n", a, count);
   } else {
      printf("'%s' does not appear in the sentence.\n", a);
   }

  return 0; 
}
