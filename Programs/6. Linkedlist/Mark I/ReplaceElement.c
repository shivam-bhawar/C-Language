/* Que. 4: Write a C program to replace one given value with first occurance of value in given linked list
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

void create_linkedlist(struct node** head) // Function to create the linked llist
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

void replace_data(struct node* head) // Function to replace any data value by given value
{
	int key, data, flag = 0;
	
	if(head != NULL)
	{
		printf("Please, Enter the data value you want to replace in the linked list : \n");
		scanf("%d",&key);
		while(head != NULL)
		{
			if(key == head->data)
			{
				printf("Please, Enter the data value you want the given data value to be replaced with : \n");
				scanf("%d",&data);
				head->data = data;
				flag = 1;
				break;
			}
			head = head->next;
		}
		if(flag != 1)
		{
			printf("Entered data value is'nt present in the linked list !!!\n");
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
		printf("1. Create the linked list\n2. Replace a data value in the linked list\n3. Display the linked list\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: create_linkedlist(&first);
			break;
		case 2: replace_data(first);
			break;
		case 3: display_linkedlist(first);
			break;
		}
	} while (choice != 0);
}

