#include<stdio.h>
#include<string.h>
struct dob {int date;
            int month;
            int year;
           };
struct employee{ char name[40];
                 int idno;
                 float salary;
                 struct dob dt;
                 char gender;
                 char grade;
                };
void isplay(struct employee *ptr1);
int main()
{
 struct employee e;
 strcpy(e.name,"jayakrishna");
 e.idno=2;
 e.salary=70000;
 e.dt.date=07;
 e.dt.month=07;
 e.dt.year=1997;
 e.gender='M';
 e.grade='S';
 display(&e);
}

 void display(struct employee *ptr1)
{
 printf("%p-%s\n",ptr1->name,ptr1->name);
 printf("%p-%d\n",&ptr1->idno,ptr1->idno);
 printf("%p-%f\n",&ptr1->salary,ptr1->salary);
 printf("%p-%ld-%d\n",&ptr1->dt.date,sizeof(ptr1->dt.date),ptr1->dt.date);
 printf("%p-%ld-%d\n",&ptr1->dt.month,sizeof(ptr1->dt.month),ptr1->dt.month);
 printf("%p-%ld-%d\n",&ptr1->dt.year,sizeof(ptr1->dt.year),ptr1->dt.year);
 printf("%p-%c\n",&ptr1->gender,ptr1->gender);
 printf("%p-%c\n",&ptr1->grade,ptr1->grade);
}
               
