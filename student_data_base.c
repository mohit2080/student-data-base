// student_data_base

#include"header.h"

int count(SLL* hptr)
{
	int c=0;
	SLL* temp=hptr;

	while(temp)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
void add_end(SLL** hptr)
{
	system("clear");
	SLL* new, *temp;
	new=(SLL*)malloc(sizeof(SLL));
	int c=count(*hptr);
	new->roll = c+1;
	printf("Enter name and percentage\n");
	scanf(" %[^\n] %f",new->name,&new->marks);
	new->next=0;

	if(*hptr==0)
	{
		*hptr=new;
	}
	else
	{
		temp=*hptr;
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=new;
	}
}

void show(SLL* hptr)
{
	system("clear");
	if(hptr==0)
	{
		printf("no records found\n");
		return;
	}
	while(hptr)
	{
		printf("%d\t%s\t%.2f\n",hptr->roll,hptr->name,hptr->marks);
		hptr=hptr->next;
	}
	printf("\n**************************\n");
}

void delete1(SLL** hptr)
{
	SLL *prev,*del,*temp;
	int a;
	printf("enter roll no\n");
	scanf("%d",&a);

	if(*hptr==0)
	{
		printf("no record found\n");
		return;
	}

	del=*hptr;
	while(del)
	{
		if(del->roll==a)
		{
			if(del==*hptr)
				*hptr=(*hptr)->next;
			else
			{
				prev->next=del->next;
			}
			free(del);
		}
		prev=del;
		del=del->next;
	}
}