/* Que. 5: Write a C program to find number of occurance of given number in given linked list
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

void create_linkedlist(struct node** head)  // Function to create the linked ist
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
		printf("Linkedlist not available !!!\n");
	}
}

void count_occurances(struct node* head) // Function to calculate the number of occurances of given data value
{
	int key, count = 0;
	
	printf("PLease, Enter the data value you want to count the number of occurances of : ");
	scanf("%d",&key);
	while(head != NULL)
	{
		if(key == head->data)
		{
			count++;
		}
		head = head->next;
	}
	printf("Number of occurances of data value %d in the linked list = %d\n",key, count);
}

void main()
{
	int choice;
	struct node* first = NULL;

	do
	{
		printf("---------------Linked list menu---------------\n");
		printf("1. Create the linkedlist\n2. Count occurances of any data value in the linked list\n3. Display the linkedlist\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: create_linkedlist(&first);
			break;
		case 2: count_occurances(first);
			break;
		case 3: display_linkedlist(first);
			break;
		}
	} while (choice != 0);
}

