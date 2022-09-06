/* Que. 4: Write a C program to print all Armstrong numbers from given singly linked list
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

void armstrong_num(struct node* head) // Function to print all Armstring numbers present in the linked list
{
	int num, temp, count, digit, DS, i, sum;
	
	if(head != NULL)
	{
		printf("Armstrong numbers = ");
		while(head != NULL)
		{	
			sum = 0;
			count = 0;
			temp = head->data; 
			if(temp != 0)
			{
				while(temp>0) // Calculate the number of digits in entered number
				{
					temp = temp/10;
					count++;
				}
			}
			else
			{
				count++;
			}
			temp = head->data; 
			while(temp > 0)
			{
				digit = temp % 10;
				DS = 1;
				for(i = 1;i <= count;i++)
				{
					DS = DS*digit;
				}
				sum = sum + DS;
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
		printf("1. Create the linked list\n2. Find all armstrong numbers present in the linked list\n3. Display the linked list\n0. Exit\n");
		printf("Pleae, Enter your choice : ");
		scanf("%d" , &choice);
		
		switch(choice)
		{
			case 1: create_linkedlist(&first);
				break;
			case 2: armstrong_num(first);
				break;
			case 3: display_linkedlist(first);
				break;
		}
	}while(choice != 0);
}
