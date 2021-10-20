#include<stdio.h>
#define MIN 23
#define MAX 45
int main()
{
 int temp=0,rev,i;
 REV:rev=0;
    i=MIN; 
 MOD:  temp=i%10;
     rev=rev*10+temp;
  
      i=i/10;
    
      if(i>0)
       goto MOD;
      printf("%d\n",rev);
       i++;
     if(i<=MAX);
      goto REV;
  
     
 

     
}
     
