/* Que. 2: Write a C program to create a singly llinked list and accept a number form user and find it in given linked list
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* create_node() // Function to create a new node
{
	struct node* newnode = NULL;

	newnode = (struct node*)malloc(sizeof(struct node));
	if (newnode != NULL)
	{
		printf("Enter the data value : ");
		scanf("%d", &(newnode->data));
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
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (tempnode->next != NULL)
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
			printf("| %d |->", (head->data));
			head = head->next;
		}
		printf("\n");
	}
	else
	{
		printf("Linked list not available !!!\n");
	}
}

void search_linkedlist(struct node* head) // Function to search any data value in the linked list
{
	int key, loc = 1, flag = 0;
	
	if(head != NULL)
	{
		printf("Please, Enter the data value you want to search in the linked list : ");
		scanf("%d",&key);
		while(head != NULL)
		{
			if(key == head->data)
			{
				printf("%d data value found at location %d\n", key, loc);
				flag = 1;
				break;
			}
			loc++;
			head = head->next;
		}
		if(flag != 1)
		{
			printf("%d data value is'nt present in the linked list !\n", key);
		}
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
		printf("1. Create the linked list\n2. Search a data value in the linked list\n3. Display the linked list\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: create_linkedlist(&first);
			break;
		case 2: search_linkedlist(first);
			break;
		case 3: display_linkedlist(first);
			break;
		}
	} while (choice != 0);
}
