#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char src[10]={'j','a','y'};

 char dst[10];
 for(i=0;src[i]!='\0';i++)
 {
  dst[i]=src[i]; // this command doesn't allocate nul char at the end
  dst[i]='\0';   // we have to use this extra line to include nul character
 printf("%p-%s\n",&dst[i],dst[i]);
}

}
