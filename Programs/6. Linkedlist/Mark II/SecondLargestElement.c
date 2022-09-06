/* Que. 3: Write a C program to find second highest element in singly linked list
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

	newnode = (struct node*) malloc(sizeof(struct node));
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

void second_highest(struct node* head) // Function to find the second highest number in the linked list
{
	int max = head->data, sec_high;
	struct node* tempnode = head;
	
	while(tempnode != NULL)
	{
		if(max < (tempnode->data))
		{
			max = tempnode->data;
		}
		tempnode = tempnode->next;
	}
	
	tempnode = head;
	sec_high = head->data;
	while(tempnode != NULL)
	{
		if(tempnode->data != max)
		{
			if(sec_high < (tempnode->data) || sec_high == max)
			{
				sec_high = tempnode->data;
			}
		}
		tempnode = tempnode->next;
	}
	
	printf("Second Highest Number = %d\n", sec_high);
}

void main()
{
	int choice;
	struct node* first = NULL;

	do
	{
		printf("---------------Linked list menu---------------\n");
		printf("1. Create the linked list\n2. Find the second highest element in the linked list\n3. Display the linked list\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: create_linkedlist(&first);
			break;
		case 2: second_highest(first);
			break;
		case 3: display_linkedlist(first);
			break;
		}
	} while (choice != 0);
}

