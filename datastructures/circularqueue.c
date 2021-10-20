#include<stdio.h>
#include<stdlib.h>
void insert(int);
void delete();
void create_queue(int *,int);
void del_queue();
void display();
int count();
int search(int);
void del_par(int);
void reverse();
void add_after(int,int);
void add_before(int,int);
void swap(int,int);
void selection_sort_data();
void selection_sort_links();
void bubble_sort_data();
void bubble_sort_links();
void del_dup();
int last();
struct node
{
	
	int data;
	struct node *link;
};
struct node *front;
struct node *rear;

int main()
{
	int opt,num,num1,num2,pos,c,n,arr[20],i,val,opt1,la;
	while(1)
	{
		printf("select the operations to perform on queue:\nMENU\n0.exit\n1.insert\n2.delete\n3.create queue\n4.delete queue\n5.display\n6.count\n7.search\n8.delete particular node\n9.add after a node\n10.add before a node\n11.reverse\n12.swap\n13.sort\n14.delete duplicate node\n15.last\n");
		scanf("%d",&opt);
		switch(opt)
		{
		case 0:		exit(0);
		case 1: 	
				printf("enter the data:\n");
				scanf("%d",&num);
				insert(num);
				break;
		/*case 2:		
				delete();
				break;
		case 3:		
				printf("enter number of inputs to be added:\n");
				scanf("%d",&n);
				printf("enter %d inputs:\n",n);
				for(i=0;i<n;i++)
					scanf("%d",&arr[i]);
				create_queue(arr,n);
				break;
		case 4:	
				del_queue();
				break;*/

		case 5:		
				display();
				break;

		
		/*case 6:		
				c=count();
				printf("count is %d\n",c);
				break;
		case 7:		
				printf("enter the input to be searched:\n");
				scanf("%d",&num);
				pos=search(num);
				printf("%d\n",pos);
				break;

		
		case 8: 		
				printf("enter the data:\n");
				scanf("%d",&num);
				del_par(num);
				break;
		
		

		case 9:
				printf("enter value which need to be added:\n ");
				scanf("%d",&val);
				printf("enter number in which value need to be added after:\n");
				scanf("%d",&num);
				add_after(num,val);
				break;

		case 10:	
				printf("enter value which need to be added before:\n ");
				scanf("%d",&val);
				printf("enter number in which value need to be added before:\n");
				scanf("%d",&num);
				add_before(num,val);
				break;
		case 11:	
				reverse();
				break;
		case 12:
				printf("enter two number which need to be swaped:\n");
				scanf("%d%d",&num1,&num2);
				swap(num1,num2);
				break;*/
		case 13:	
				printf("1.Selection sort:exchange by data\n2.Selection sort:exchange by links\n3.Bubble sort:exchange by data\n4.Bubble sort:exchange by links\n");
				scanf("%d",&opt1);
				switch(opt1)
				{
					/*case 1: selection_sort_data();
						break;
					case 2: selection_sort_links();
						break;
					case 3: bubble_sort_data();
						break;*/
					case 4: bubble_sort_links();
						break;
				}
				break;
		/*case 14:	
				del_dup();
				break;
		case 15:	
				la=last();
				printf("%d\n",la);
				break;*/
		
		default:	
				printf("invalid input\n");
				break;
		}
	}
}



void insert(int num)
{
	struct node *temp;
	struct node *ptr=(struct node *)malloc(1*sizeof(struct node));//to traverse the queue
	if(ptr==NULL)
	{
		printf("insufficient memory\n");
		exit(1);
	}
	ptr->data=num;

	if(front==NULL)
	{
	
		front=rear=ptr;
                ptr->link=ptr;
		printf("element is inserted\n");
		return;
	}
	rear->link=ptr;
	ptr->link=front;
	front=ptr;
	printf("element is inserted\n");
}

void display()
 {
  struct node *temp;
 
  if(front==NULL)
  {
   printf("list is empty\n");
   return;
  }
  temp=front;

 while(temp->link!=front)
  {
   printf("adress of temp:%p-data in temp:%d\n",temp,temp->data);
   temp=temp->link;
  }
  printf("adress of temp:%p-data in temp:%d\n",temp,temp->data);
 }

void bubble_sort_links()
{
	struct node *p,*q,*e,*temp,*prev;

  if(front==NULL)
  {
   printf("list is empty\n");
   return;
  }
	for(e=NULL;front->link!=e;e=q)
	{
		for(p=front;p->link!=e;p=p->link)
		{
			q=p->link;
			if((p->data) > (q->data))
			{
				temp=p->link;
                                 p->link=q->link;
		                 q->link=temp;
				/*if(p==front)
					front=q;
				else
				        front=rear;	
				if(p->link!=rear)
					rear->link=p;
				else
						rear=p;*/
				temp=p;
				p=q;
				q=temp;
			}
		}
		
	}
	printf("Bubble sort done\n\n");
}
