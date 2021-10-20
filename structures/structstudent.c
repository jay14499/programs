#include<stdio.h>
struct student
{
 char name[20];
 unsigned int rollno;
 char gender;
 char bloodgroup;
 char grade;
};
 
int main()
{
 struct student s;
 printf("enter the name of student : ");
 scanf("%s",s.name);
 printf("enter roll no.of student  : ");
 scanf("%d",&s.rollno);
 printf("enter the genderof student: ");
 scanf(" %c",&s.gender);
 printf("enter blood group student : ");
 scanf(" %c",&s.bloodgroup);
 printf("enter the grade of student: ");
 scanf(" %c",&s.grade);
 
 printf("\nsize of struct definition : %ld\n",sizeof(struct student));
 printf("size of struct variable   : %ld\n",sizeof(s));
 printf("adress of struct variable : %p\n\n",&s);
 
 printf("Name of the student       : %p-%ld-%s\n",s.name,sizeof(s.name),s.name);
 printf("Roll of the student       : %p-%ld-%d\n",&s.rollno,sizeof(s.rollno),s.rollno);
 printf("Gender of the student     : %p-%ld-%c\n",&s.gender,sizeof(s.gender),s.gender);
 printf("Bloodgroup of the student : %p-%ld-%c\n",&s.bloodgroup,sizeof(s.bloodgroup),s.bloodgroup);
 printf("Grade of the student      : %p-%ld-%c\n",&s.grade,sizeof(s.grade),s.grade);
}
