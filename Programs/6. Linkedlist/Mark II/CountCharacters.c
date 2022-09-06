/* Que. 1: Write a C program to accept string with multiple spaces and print count of number of characters from string in given Singly linked list
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	char* str;
	struct node* next;
};

char* get_string() // Function to accept a string from the user
{
	int len = 1;
	char ch;
	char* str = NULL;
	
	str = (char*) malloc(sizeof(char) + len);
	*str = '\0';
	scanf(" ");
	scanf("%c", &ch);
	while(ch != '\n')
	{
		len++;
		str = (char*) realloc(str, sizeof(char)+len);
		*(str + (len - 2)) = ch;
		*(str + (len - 1)) = '\0';
		scanf("%c", &ch);
	}
	return str;
}

struct node* create_node() // Function to create a new node
{
	struct node* newnode = NULL;
	newnode = (struct node*) malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("Memory allocation failed !!!");
	}
	else
	{
		printf("Please, Enter the string : ");
		newnode->str = get_string();
		newnode->next = NULL;
		
		return newnode;
	}
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

int num_of_nodes(struct node* head) // Function to count the number of nodes present in the linked list
{
	int count = 0;
	
	while(head != NULL)
	{
		count++;
		head = head->next;
	}	
	
	return count;
}

void display_linkedlist(struct node* head) // Function to display the linked list
{
	if(head != NULL)
	{
		while(head != NULL)
		{
			printf("| %s |->", head->str);
			head = head->next;
		}
		printf("\n");
	}
	else
	{
		printf("Linked list not found !!!\n");
	}
}

void count_char(struct node* head) // Function to count the number of charecters in any string present in the linked list
{
	int count = 0, pos, i, total_nodes;
	char string[100];
	
	total_nodes = num_of_nodes(head);
	printf("Please, Enter the position (1 to %d) of the string you want to count the number of charecters in : ", total_nodes);
	scanf("%d", &pos);
	
	if(pos > total_nodes)
	{
		printf("Invalid position !!!\n");
		count_char(head);
	}
	else
	{
		for(i=1; i<pos; i++)
		{
			head = head->next;
		}
		
		strcpy(string, head->str);
		
		for(i=0; string[i] != '\0'; i++)
		{
			if(string[i] != ' ')
			{
				count++;
			}
		}
		
		printf("Number of charecters in '%s' = %d\n", head->str, count);
	}
}

void main()
{
	int choice;
	struct node* first = NULL;
	do
	{
		printf("--------------------- Linked list menu --------------------\n");
		printf("1. Create the linked list of strings\n2. Count the number of charecters in any string in the linked list\n3. Display the linked list\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: create_linkedlist(&first);
				break;
			case 2: count_char(first);
				break;
			case 3: display_linkedlist(first);
				break;
		}
	}while(choice != 0);
}	
