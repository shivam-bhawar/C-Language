/* Que. 1: Write a C program to create singly linked list and sort it in ascending order
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* create_node() // Funtion to create a new node
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

void sort_linkedlist(struct node** head) // Function to sort the data values in the linked list
{
	struct node* temp1 = NULL;
	struct node* temp2 = NULL;
	int temp;
	
	if(*head != NULL)
	{
		temp1 = *head;
		
		while((temp1->next) != NULL)
		{
			temp2 = temp1->next;
			while(temp2 != NULL)
			{
				if((temp1->data) > (temp2->data))
				{
					temp = temp1->data;
					temp1->data = temp2->data;
					temp2->data = temp;
				}
				temp2 = temp2->next;
			}
			temp1 = temp1->next;
		}
		printf("Linked list sorted successfully\n");
		display_linkedlist(*head);
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
		printf("1. Create the linked list\n2. Sort the linked list in ascending order\n3. Display the linked list\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: create_linkedlist(&first);
			break;
		case 2: sort_linkedlist(&first);
			break;
		case 3: display_linkedlist(first);
			break;
		}
	} while (choice != 0);
}
