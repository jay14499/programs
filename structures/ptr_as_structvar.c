#include<stdio.h>
#include<string.h>
struct dob
     {
      int date;
      int month;
      int year;
      };
struct employee
   {
    char name[32];
    int idno;
    float salary;
    struct dob *dptr;
    char gender;
    char grade;
    };
void display(struct employee *ptr);
int main()
{
 struct employee e;
 struct dob dt;
 e.dptr=&dt;
 strcpy(e.name,"jayakrishna");
 e.idno=212;
 e.salary=65000;
 e.dptr->date=07;
 e.dptr->month=07;
 e.dptr->year=1997;
 e.gender='M';
 e.grade='S';
 display(&e);
}
void display(struct employee *ptr)
{
 printf("%s\n",ptr->name);
 printf("%d\n",ptr->idno);
 printf("%d-%d-%d\n",ptr->dptr->date,ptr->dptr->month,ptr->dptr->year);
 printf("%f\n",ptr->salary);
 printf("%c\n",ptr->gender);
 printf("%c\n",ptr->grade);
}
