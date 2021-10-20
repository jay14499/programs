#include<stdio.h>
#include<string.h>
struct employee{char name[32];
                 unsigned int idno;
                 float salary;
                 char grade;
                 char gender;
                 };
                 
int main()
{
 struct employee e1={"ram",22,65000,'S','M'};
 struct employee e2;
 
 strcpy(e2.name,e1.name);
 e2.idno=e1.idno;
 e2.salary=e1.salary;
 e2.grade=e1.grade;
 e2.gender=e1.gender;

 printf("name of employee  : %p-%s\n",e2.name,e2.name);
 printf("Id no of employee : %p-%d\n",&e2.idno,e2.idno);
 printf("Salary of employee: %p-%f\n",&e2.salary,e2.salary);
 printf("Grade of employee : %p-%c\n",&e2.grade,e2.grade);
 printf("Gender of employee: %p-%c\n",&e2.gender,e2.gender);
}
