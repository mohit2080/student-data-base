// main_student_data_base

#include"header.h"

void main()
{
	char op;
	while(1)
	{
		printf("Enter choice\na) add new record\td) delete a record\ts) show the list\nm) modify a rcord\tv) save\t\t\te) exit\nt) sort the list\tl)delete all records\n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'a':add_end(&hptr);
			break;
			case 'd':delete1(&hptr);
			break;
			case 's':show(hptr);
			break;/*
			case 'm':modify(&hptr);
			break;
			case 'v':save(&hptr);
			break;*/
			case 'e':return;
			break;/*
			case 't':sort(&hptr);
			break;
			case 'l':delete_all(&hptr);
			break;*/
			default: printf("Enter valid choice\n");
		}
	}
}