/* Que. 3: Write a C program to create two singly linked lists and merge it in to one singly linked list 
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* next;
};

struct node* create_node() // Function to create a new node
{
	struct node* newnode = NULL;
	
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode != NULL)
	{
		printf("Enter the data value : ");
		scanf("%d",&newnode->data);
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
		if(*head==NULL)
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

struct node* create_separate_node(int data_value) // Function to create a new node for the resultant linked list
{
	struct node* newnode = NULL;
	
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode != NULL)
	{
		newnode->data = data_value;
		newnode->next = NULL;
	}
	else
	{
		printf("Memory allocation failed !!!\n");
	}
	
	return newnode;
}

void create_separate_linkedlist(struct node** head, int data) // Function to create a separate linked list
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

void merge_linkedlist(struct node* head1,struct node* head2,struct node** head3) // Function to merge two linked lists
{
	if(head1 != NULL && head2 != NULL)
	{
		while(head1 != NULL)
		{
			create_separate_linkedlist(head3, head1->data);
			head1 = head1->next;
		}
		while(head2 != NULL)
		{
			create_separate_linkedlist(head3, head2->data);
			head2 = head2->next;
		}
		display_linkedlist(*head3);
	}
	else
	{
		printf("Both linked lists are empty !!!\n");
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
		printf("---------------Linked list menu---------------\n");
		printf("1. Create the first linked list\n2. Display the first linked list\n3. Create the second linked list\n4. Display the second linked list\n5. Merge both linked lists\n0. Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create_linkedlist(&first1);
				break;
			case 2: display_linkedlist(first1);
				break;
			case 3: create_linkedlist(&first2);
				break;
			case 4: display_linkedlist(first2);
				break;
			case 5: first3 = NULL;
				       merge_linkedlist(first1,first2,&first3);
				break;
		}
	}while(choice != 0);
}
