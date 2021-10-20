#include<stdio.h>
struct student read();
struct student{ char name[40];
                unsigned int idno;
                char gender;
                char bloodgroup;
                char grade;
              };

int main()
{
 struct student s;
 s=read();
 printf("\nName of the student  : %s\n",s.name);
 printf("Idno of student      : %d\n",s.idno);
 printf("Gender of student    : %c\n",s.gender);
 printf("Bloodgroup of student: %c\n",s.bloodgroup);
 printf("Grade of the student : %c\n",s.grade);
}

struct student read()
{
 struct student s1;
 printf("enter the name of student  :");
 scanf("%s",s1.name);
 printf("enter the id of student    :");
 scanf("%d",&s1.idno);
 printf("enter the gender of student:");
 scanf(" %c",&s1.gender);
 printf("enter bloodgroup of student:"); 
 scanf(" %c",&s1.bloodgroup);
 printf("enter the grade of student :");
 scanf(" %c",&s1.grade);
 return s1;
}
