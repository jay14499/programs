#include<stdio.h>
#include<stdlib.h>
#define N 5
int status=0;

struct dob{
           int date;
           int month;
           int year;
          };

struct student{
               char name[32];
               int idno;
               struct dob dt;
               char gender;
               char grade;
               };

struct function_fun
{
 void (*f_read)(struct student *,int );
 void (*f_display)(struct student *,int );
};

void read(struct student *,int);
void display(struct student *,int); 

int main()
{
 int opt,i,n;
 struct student *ptr;
 struct function_fun func;
 ptr=(struct student *)malloc(N*sizeof(struct student));
  while(1)
   {
   printf("\nmenu\n1.read\n2.display\n");
   scanf("%d",&opt);

   switch(opt)
        {
         case 0:exit(0);
         case 1:func.f_read=read;
                func.f_read(ptr,N);
                      status=1;
                      break;
 case 2:if(status==0)
         {
          printf("read the data first\n");
          break;
         }
         func.f_display=display;
         func.f_display(ptr,N);
         break;
 default:printf("invalid option\n");
        }
  }
}

void read(struct student *ptr1,int n)
{
int i;
 for(i=0;i<n;i++)
 {
  printf("\nenter the name of  student %d          :",i+1);
  scanf("%s",ptr1[i].name);
  __fpurge(stdin);

  printf("enter the idno of student %d           :",i+1);
  scanf("%d",&ptr1[i].idno);

  printf("enter the date of birth of student %d  :",i+1);
  scanf("%d-%d-%d",&ptr1[i].dt.date,&ptr1[i].dt.month,&ptr1[i].dt.year);
  __fpurge(stdin);

  printf("enter the gender of student %d         :",i+1);
  scanf("%c",&ptr1[i].gender);
  __fpurge(stdin);

  printf("enter the grade of student %d          :",i+1);
  scanf("%c",&ptr1[i].grade);
  __fpurge(stdin);

}
}

void display(struct student *ptr1,int n)
{
 int i;
 for(i=0;i<n;i++)
{
 printf("\nName of %dst student    :%s\n",i+1,ptr1[i].name);
 printf("Idno of %dst student      :%d\n",i+1,ptr1[i].idno);
 printf("DOB of %dst student       :%d-%d-%d\n",i+1,ptr1[i].dt.date,ptr1[i].dt.month,ptr1[i].dt.year);
 printf("Gender of %dst student    :%c\n",i+1,ptr1[i].gender);
 printf("Grade of %dst student     :%c\n",i+1,ptr1[i].grade);
}
}
