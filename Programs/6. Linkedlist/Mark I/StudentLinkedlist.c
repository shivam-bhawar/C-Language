/* Que. 9: Write a C program to create linked list to store student information and print student information using singly linked list
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<malloc.h>

struct node
{
	int roll_no;
	char name[100];
	int marks;
	struct node* next;
};

struct node* create_node() // Function to create a new node
{
	struct node* newnode = NULL;
	
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode != NULL)
	{
		printf("Enter Roll number of the student : ");
		scanf("%d",&(newnode->roll_no));
		printf("Enter name of the student : ");
		scanf("%s",&(newnode->name));
		printf("Enter marks of the student : ");
		scanf("%d",&(newnode->marks));
		newnode->next = NULL;
	}
	else
	{
		printf("Memory allocation failed !!!\n");
	}
	
	return newnode;
}

void create_linkedlist(struct node** head) // Function to create the linked list
{
	struct node* newnode = NULL;
	struct node* tempnode = *head;
	
	newnode = create_node();
	if(*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while(tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = newnode;
	}
}

void display_linkedlist(struct node* head) // Function to display the linked list
{
	if (head != NULL)
	{
		printf("Roll no.\tName\tMarks\n");
		while (head != NULL)
		{
			printf("%d\t\t%s\t%d\n",(head->roll_no),(head->name),(head->marks));
			head = head->next;
		}
	}
	else
	{
		printf("Linked list not available !!!\n");
	}	
}

void main()
{
	struct node* first = NULL;
	int choice, i, count = 0;
	do
	{
		printf("---------------Linked list menu---------------\n");
		printf("1. Create the linked list\n2. Display the linked list\n0. Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create_linkedlist(&first);
				break;
			case 2: display_linkedlist(first);
				break;
		}
	}while(choice != 0);
}
