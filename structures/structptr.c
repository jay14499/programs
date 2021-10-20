#include<stdio.h>
struct employee{ char name[40];
                 unsigned int idno;
                 float salary;
                 char gender;
                 char grade;
                };
int main()
{
 struct employee e={"mohan",10,65000,'M','J'};
 struct employee *ptr;
 ptr=&e;
 
 printf("adress: %p\n",&e);
 printf("size  : %ld\n",sizeof(e));
 printf("name  : %p-%ld-%s\n",ptr->name,sizeof(e.name),ptr->name);
 printf("Idno  : %p-%ld-%d\n",&ptr->idno,sizeof(e.idno),ptr->idno);
 printf("salary: %p-%ld-%f\n",&ptr->salary,sizeof(e.salary),ptr->salary);
 printf("gender: %p-%ld-%c\n",&ptr->gender,sizeof(e.gender),ptr->gender);
 printf("grade : %p-%ld-%c\n",&ptr->grade,sizeof(e.grade),ptr->grade);
}
