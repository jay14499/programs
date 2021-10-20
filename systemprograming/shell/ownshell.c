#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
//#include<ncursor.h>
int main()
{
 int i,j,k,l=0,status=0,id;
 char *sptr;
 char *args[30];
 char ch;
 char cmd_buf[1024];
 while(1)
  {
   i=0;
   j=0;
   for(k=0;k<30;k++)
	args[k]='\0';
   for(k=0;k<1023;k++)
	cmd_buf[k]='\0';
	printf("Myshell $>");
        gets(cmd_buf);
       // fgets(cmd_buf,sizeof(cmd_buf),stdin);
   for(j;cmd_buf[i]!='\0';j++)
    {
	args[j]=&cmd_buf[i];
        for(i;cmd_buf[i]!=' ';i++)
         {
           if(cmd_buf[i]=='\0')
           break;
          }
        cmd_buf[i]='\0';
        i++;
     }
   args[j]='\0';
   sptr=args[0];
   if(strcmp(cmd_buf,"ver")==0)
   {
	printf("simple shell version 99.0,AUGUST,2021\n");
	continue;
   }
   if(strcmp(cmd_buf,"q")==0)
	exit(0);
    id=fork();
    if(id==0)
    {
	execvp(args[0],args);
	exit(0);
    }
    wait(&status);
   }
}
