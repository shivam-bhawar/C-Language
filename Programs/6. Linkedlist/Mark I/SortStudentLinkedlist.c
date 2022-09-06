/* Que. 10: Write a C program to sort student information in ascending order according to marks of students using singly linked list
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<malloc.h>
#include<string.h>

struct node
{
	int roll_no;
	char name[100];
	int marks;
	struct node* next;
};

struct node* create_node() // Function to create a new node
{
	struct node* newnode = NULL;
	
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode != NULL)
	{
		printf("Enter Roll number of the student : ");
		scanf("%d",&(newnode->roll_no));
		printf("Enter name of the student : ");
		scanf("%s",&(newnode->name));
		printf("Enter marks of the student : ");
		scanf("%d",&(newnode->marks));
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
	if (head != NULL)
	{
		printf("Roll no.\tName\tMarks\n");
		while (head != NULL)
		{
			printf("%d\t\t%s\t%d\n",(head->roll_no),(head->name),(head->marks));
			head = head->next;
		}
	}
	else
	{
		printf("Linked list not available !!!\n");
	}	
}

void sort_linkedlist(struct node** head) // Function  to sort the linked list in ascending order of the marks values
{
	struct node* temp1 = NULL;
	struct node* temp2 = NULL;
	struct node* temp = (struct node*)malloc(sizeof(struct node));;
	
	if(*head != NULL)
	{
		temp1 = *head;
		
		while(((temp1->next)->next) != NULL)
		{
			temp2 = temp1->next;
			while(temp2 != NULL)
			{
				if((temp1->marks) > (temp2->marks))
				{
					temp->roll_no = temp1->roll_no;
					temp1->roll_no = temp2->roll_no;
					temp2->roll_no = temp->roll_no;
					
					strcpy(temp->name,temp1->name);
					strcpy(temp1->name,temp2->name);
					strcpy(temp2->name,temp->name);
									
					temp->marks = temp1->marks;
					temp1->marks = temp2->marks;
					temp2->marks = temp->marks;
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
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create_linkedlist(&first);
				break;
			case 2: sort_linkedlist(&first);
				break;
			case 3: display_linkedlist(first);
				break;
		}
	}while(choice != 0);
}
