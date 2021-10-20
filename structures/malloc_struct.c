#include<stdio.h>
#include<stdlib.h>
struct student{char name[40];
               unsigned int idno;
               char gender;
               char bloodgroup;
               char grade;
              };
int main()
{
 struct student *ptr;
 ptr=(struct student *)malloc(sizeof(struct student));
 if(ptr==NULL)
 {
 printf("insufficient memory\n");
 exit(1);
 }
  struct student s;
 printf("enter the student name          :");
 scanf("%s",ptr->name);
 printf("enter the idno of student       :");
 scanf("%d",&ptr->idno);
 printf("enter the blood group of student:");
 scanf(" %c",&ptr->bloodgroup);
 printf("enter the gender of student     :");
 scanf(" %c",&ptr->gender);
 printf("enter the grade of student      :");
 scanf(" %c",&ptr->grade);


 printf("\n\nadress: %p\n",&s);
 printf("size  : %ld\n",sizeof(s));
 printf("Name of the student   : %p-%ld-%s\n",ptr->name,sizeof(s.name),ptr->name);
 printf("Idno of the student   : %p-%ld-%d\n",&ptr->idno,sizeof(s.idno),ptr->idno);
 printf("blood group of student: %p-%ld-%c\n",&ptr->bloodgroup,sizeof(s.bloodgroup),ptr->bloodgroup);
 printf("gender of the student : %p-%ld-%c\n",&ptr->gender,sizeof(s.gender),ptr->gender);
 printf("grade of the student  : %p-%ld-%c\n",&ptr->grade,sizeof(s.grade),ptr->grade);

 free(ptr);
}
