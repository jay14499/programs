#include<stdio.h>
struct employee{ char name[32];
                 unsigned int idno;
                 float salary;
                 char gender;
                 char grade;
                };
void display(struct employee e);
int main()
{
 struct employee e={"hari",33,65000,'M','S'};
 display(e);
}

void display(struct employee e)
{
 printf("Name of the employee  : %s\n",e.name);
 printf("Id of the employee    : %d\n",e.idno);
 printf("Salary of the employee: %f\n",e.salary);
 printf("gender of the employee: %c\n",e.gender);
 printf("Grade of the employee : %c\n",e.grade);
}
