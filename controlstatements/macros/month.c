#include<stdio.h>
#define JAN 1
#define FEB 2
#define MAR 3
#define APR 4
#define MAY 5
#define JUNE 6
#define JULY 7
#define AUG 8
#define SEP 9
#define OCT 10
#define NOV 11
#define DEC 12
int main()
{
 int mnt;
 printf("enter the month 1-12\n");
 scanf("%d",&mnt);

 switch(mnt)
  {
  case JAN : printf("%d days \n",31);
         break;

  case MAR: printf("%d days \n",31);
         break;

  case MAY: printf("%d days \n",31);
         break;

  case JULY: printf("%d days \n",31);
         break;

  case AUG: printf("%d days \n",31);
         break;

  case OCT: printf("%d days \n",31);
         break;

  case DEC: printf("%d days \n",31);
         break;

  case FEB: printf("%d days \n",28);
         break;

  case APR: printf("%d days \n",30);
         break;

  case JUNE: printf("%d days \n",30);
         break;

  case SEP: printf("%d days \n",30);
         break;

  case NOV: printf("%d days \n",30);
         break;

  default : printf("INVALID");
         
}
}

