#Self referential structure is a strucutre which contains a point to a structure of the same type

struct abc
{
int a;
char b;
struct abc *self;
};

node consists of data and link
node is nothing but a self referential structure in c programming.

creating node in c programming language
#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *link;
};

int main()
{
struct node *head = NULL
head = (struct node *)malloc(sizeof(struct node));

head->data = 45;
head->link = NULL;
	PRINTF("%d", head->data);
return 0;
}
