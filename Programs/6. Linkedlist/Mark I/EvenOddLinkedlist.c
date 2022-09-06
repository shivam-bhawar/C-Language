/* Que. 8: Write a C program to create two linked lists (B and C) from one linked list (A) and one of two (B) contains only even data from (A) and other contains only odd data from (A)
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

struct node* create_separate_node(int data) // Function to create separate node for resultant linked lists
{
	struct node* newnode = NULL;
	
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode != NULL)
	{
		newnode->data = data;
		newnode->next = NULL;
	}
	else
	{
		printf("Memory allocation failed !!!\n");
	}
	
	return newnode;
}

void create_separate_linkedlist(struct node** head, int data) // Function to create separate linked list
{
	struct node* newnode = NULL;
	struct node* tempnode = *head;
	
	newnode = create_separate_node(data);
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

void separate_linkedlist(struct node* head1, struct node** head2, struct node** head3) // Function to separate even and odd data values from the linked list
{
	if(head1 != NULL)
	{
		while(head1 != NULL)
		{
			if(head1->data % 2 == 0)
			{
				create_separate_linkedlist(head2, head1->data);
			}
			else
			{
				create_separate_linkedlist(head3, head1->data);
			}
			head1 = head1->next;
		}
		printf("Even Linked list : ");
		display_linkedlist(*head2);
		printf("Odd Linked list : ");
		display_linkedlist(*head3);
	}
	else
	{
		printf("Linked list not available !!!\n");
	}
}

void main()
{
	int choice;
	struct node* first1 = NULL;
	struct node* first2 = NULL;
	struct node* first3 = NULL;

	do
	{
		printf("1. Create the linked list\n2. Display the linked list\n3. Separate odd and even data values form the linked list\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: create_linkedlist(&first1);
			break;
		case 2: display_linkedlist(first1);
			break;
		case 3: separate_linkedlist(first1, &first2, &first3); 
			break;
		}
	} while (choice != 0);
}

