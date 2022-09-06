/* Que. 7: Write a C program to check whether strings are Anagram strings or not in given Singly linked list
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

void anagram_strings(struct node* head) // Function to check if any two strings from the linked list are anagram or not
{
	int pos1, pos2, i, j, diffrence, count, total_nodes;
	char str1[100], str2[100];
	struct node* temp1 = head;
	struct node* temp2 = head;
	
	total_nodes = num_of_nodes(head);
	printf("Please, Enter the positions (between 1 to %d) of the strings you want to check whether are anagram or not :\n", total_nodes);
	scanf("%d %d", &pos1, &pos2);
	if(pos1 > total_nodes || pos2 > total_nodes)
	{
		printf("Invalid positions !!!\n");
		anagram_strings(head);
	}
	else
	{
		for(i=1;i<pos1;i++)
		{
			temp1 = temp1->next;
		}
		for(i=1;i<pos2;i++)
		{
			temp2 = temp2->next;
		}
		
		strcpy(str1, temp1->str);
		strcpy(str2, temp2->str);
		
		for(i=0;str1[i]!='\0';i++)
			{
				count=0;
				for(j=0;str2[j]!='\0';j++)
					{
						if(str1[i]==str2[j])
							{
								count++;
							}
						if(count!=0)
							{
								break;
							}
					}
				if(count==0)
					{
						break;
					}
			}
		if(count==0)
			{
				printf("No, Strings ar'nt Anagram Strings\n");
			}
		else
			{
				printf("Yes, Strings are Anagram Strings\n");
			}
	}
}

void main()
{
	int choice;
	struct node* first = NULL;
	do
	{
		printf("--------------------- Linked list menu --------------------\n");
		printf("1. Create the linked list of strings\n2. Check if any two strings in the linked list are anagram or not\n3. Display the linked list\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: create_linkedlist(&first);
				break;
			case 2: anagram_strings(first);
				break;
			case 3: display_linkedlist(first);
				break;
		}
	}while(choice != 0);
}	
