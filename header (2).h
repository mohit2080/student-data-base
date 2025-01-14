// header.h

#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	char name[30];
	float marks;
	struct st *next;
}SLL;
SLL * hptr;

extern int count(SLL* hptr);
void show(SLL* hptr);
void add_end(SLL** hptr);