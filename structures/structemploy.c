#include<stdio.h>
struct employee
 {
  char name[32];
  unsigned int idno;
  float salary;
  char gender;
  char grade;
 };

int main()
 {
  int i;
  struct employee e;
  printf("size of variable name: %ld\n",sizeof(e));
  printf("size of struct keyword: %ld\n",sizeof(struct employee));
  printf("adress of struct variable: %p\n",&e);
  printf("enter employee name     : ");
  scanf("%s",e.name);
  printf("enter employee id       : ");
  scanf("%d",&e.idno);
  printf("enter employee salary   : ");
  scanf("%f",&e.salary);
  printf("enter employee grade : ");
  scanf(" %c",&e.grade);
  printf("enter gender of employee: ");
  scanf(" %c",&e.gender);
  
  
 for(i=0;e.name[i]!='\0';i++)
 {
  printf("%p-%c-%ld\n",&e.name[i],e.name[i],sizeof(e.name));
 }
 printf("name of the employee  : %p-%s-%ld\n",e.name,e.name,sizeof(e.name));
 printf("Id no of employee     : %p-%d-%ld\n",&e.idno,e.idno,sizeof(e.idno));
 printf("salary of employee    : %p-%f-%ld\n",&e.salary,e.salary,sizeof(e.salary));
 printf("gender of the employee: %p-%c-%ld\n",&e.gender,e.gender,sizeof(e.gender));
 printf("grade of employee     : %p-%c-%ld\n",&e.grade,e.grade,sizeof(e.grade));  
}
