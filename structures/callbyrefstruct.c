#include<stdio.h>
struct student read(struct student *);
struct student{ char name[40];
                 unsigned int idno;
                 char bloodgroup;
                 char gender;
                 char grade;
                };

int main()
{
 struct student s;
 struct student *ptr;
 ptr=&s;
 s=read(ptr);
 printf("\n\nadress: %p\n",&s);
 printf("size  : %ld\n",sizeof(s));
 printf("Name of the student   : %p-%ld-%s\n",ptr->name,sizeof(s.name),ptr->name);
 printf("Idno of the student   : %p-%ld-%d\n",&ptr->idno,sizeof(s.idno),ptr->idno);
 printf("blood group of student: %p-%ld-%c\n",&ptr->bloodgroup,sizeof(s.bloodgroup),ptr->bloodgroup);
 printf("gender of the student : %p-%ld-%c\n",&ptr->gender,sizeof(s.gender),ptr->gender);
 printf("grade of the student  : %p-%ld-%c\n",&ptr->grade,sizeof(s.grade),ptr->grade);
 
}

struct student read(struct student *ptr)
{ 
 struct student s1;
 printf("enter the student name          :");
 scanf("%s",s1.name);
 printf("enter the idno of student       :");
 scanf("%d",&s1.idno);
 printf("enter the blood group of student:");
 scanf(" %c",&s1.bloodgroup);
 printf("enter the gender of student     :");
 scanf(" %c",&s1.gender);
 printf("enter the grade of student      :");
 scanf(" %c",&s1.grade);

 return s1;
}



