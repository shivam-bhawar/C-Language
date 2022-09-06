/* Que. 7: Write a C program to create a linked list with multiple strings
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<malloc.h>

struct node
{
	char string[100];
	struct node* next;
};

struct node* create_node() // Function to create a new node
{
	struct node* newnode = NULL;
	
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode != NULL)
	{
		printf("Enter the string : ");
		scanf("%s",&(newnode->string));
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
			while(tempnode->next !=  NULL)
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
		while (head != NULL)
		{
			printf("| %s |->", (head->string));
			head = head->next;
		}
		printf("\n");
	}
	else
	{
		printf("Linked list not available !!!\n");
	}	
}

void main()
{
	int choice;
	struct node* first = NULL;
	do
	{
		printf("---------------Linked list menu---------------\n");
		printf("1. Create the linked list of strings\n2. Display the linked list\n0. Exit\n");
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
