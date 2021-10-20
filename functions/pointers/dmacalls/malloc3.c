#include<stdio.h>
#include<stdlib.h>
 struct book
  {
   char name[20];
   int price;
   int pages;
   };

int main()
{
 int i;
 struct book *ptr;
 ptr=(struct book *)malloc(2*sizeof(struct book));
 for(i=0;i<3;i++)
 {
  printf("enter the name of book %d:",i+1);
  scanf("%s",ptr[i].name);
  __fpurge(stdin);
  printf("enter the price of book %d:",i+1);
  scanf("%d",&ptr[i].price);
  printf("enter the no of pages book %d:",i+1);
  scanf("%d",&ptr[i].pages);
}
 
 for(i=0;i<3;i++)
 {
  printf("name of the book %d is %s\n",i+1,ptr[i].name); 
  printf("price of the book %d is %d\n",i+1,ptr[i].price); 
  printf("no of pages of book %d is %d\n",i+1,ptr[i].pages);
}
}
