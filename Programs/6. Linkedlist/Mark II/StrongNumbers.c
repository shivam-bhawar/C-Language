/* Que. 1: Write a C program to print all Strong numbers from the linked list
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
	
	newnode = (struct node*) malloc(sizeof(struct node));
	if(newnode != NULL)
	{
		printf("Please, Enter the data value : ");
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
	if(head != NULL)
	{
		while(head != NULL)
		{
			printf("| %d |->" , (head->data));
			head = head->next;
		}
		printf("\n");
	}
	else
	{
		printf("Linked list not available !!!\n");
	}
}

void strong_numbers(struct node* head) // Function to print all Strong numbers in the linked list
{
	int temp, digit, sum, fact;
	
	if(head != NULL)
	{
		printf("Strong Numbers = ");
		while(head != NULL)
		{
			sum = 0;
			temp = head->data; 
			while(temp > 0)
			{
				fact = 1;
				digit = temp % 10;
				while(digit >= 1) // Calculate factorial of digits
				{
					fact = fact * digit;
					digit--;
				}
				sum = sum + fact;
				temp = temp / 10;
			}
			if(sum == head->data)
			{
				printf("%d, ", head->data);
			}
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
		printf("-------------------- Linked list menu --------------------\n");
		printf("1. Create the linked list\n2. Print all Strong numbers present in the linked list\n3. Display the linked list\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d" , &choice);
		
		switch(choice)
		{
			case 1: create_linkedlist(&first);
				break;
			case 2: strong_numbers(first);
				break;
			case 3: display_linkedlist(first);
				break;
		}
	}while(choice != 0);
}
