#include<stdio.h>
#include<stdlib.h>
void read();
void display();
struct dob
{
 int date;
 int mnt;
 int year;
};
struct student
{
 char name[20];
 int idno;
 float marks;
 char gen;
 struct dob dt;
};
struct student_ops
{
 void (*f_read)(struct student *ptr);
 void (*f_display)(struct student *ptr);
};
main()
{
 struct student s[5];
 struct dob dt;
 struct student *ptr=((struct student *)malloc(5*sizeof(struct student *)));
 struct student_ops func;
 int opt;
while(1)
{
 printf("enter the option\n 0.exit\n1.read\n2.display\n");
 scanf("%d",&opt);

 switch(opt)
 {
   case 0: exit(0);
   case 1: func.f_read=read;
           func.f_read(ptr);
           
           break;
   case 2: func.f_display=display;
             func.f_display(ptr);
           break;
   default : printf("enter the correct option\n");
 }
}
}
void read(struct  student *ptr)
{
 int i;
 for(i=0;i<5;i++)
  {
    printf("enter the name\n");
    scanf("%s",ptr[i].name);
    __fpurge(stdin);
    printf("enter the idno\n");
    scanf("%d",&ptr[i].idno);
    __fpurge(stdin);
   printf("enter the gen\n");
    scanf("%c",&ptr[i].gen);
    __fpurge(stdin);
    printf("enter the date\n");
    scanf("%d",&ptr[i].dt.date);
   __fpurge(stdin);
    printf("enter the month\n");
    scanf("%d",&ptr[i].dt.mnt);
    __fpurge(stdin);
    printf("enter the year\n");
    scanf("%d",&ptr[i].dt.year);
    __fpurge(stdin);
  }
}
void display(struct student *ptr)
{
  int i;
  for(i=0;i<5;i++)
   {
     printf("name:%s\n",ptr[i].name);
     printf("idno:%d\n",ptr[i].idno); 
     //printf("%d\n",ptr[i].marks);
     printf("gender:%c\n",ptr[i].gen);
     printf("date of birth:%d/%d/%d",ptr[i].dt.date,ptr[i].dt.mnt,ptr[i].dt.year);

   }
}
