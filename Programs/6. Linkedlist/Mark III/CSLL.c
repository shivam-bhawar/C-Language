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
		(*head)->next = *head;
	}
	else
	{
		while(tempnode->next != *head)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = newnode;
		newnode->next = *head;
	}
}

int num_of_nodes(struct node* head) // Function to count the number of nodes present in the linked list
{
	int count = 0;
	struct node* temp = head;
	
	if(head != NULL)
	{
		while((temp->next) != head)
		{
			count++;
			temp = temp->next;
		}
		count++;
	}
	
	return count;
}

void display_linkedlist(struct node* head) // Function to display the linked list in actual order 
{
	struct node* temp = head;
	if(head != NULL)
	{
		do
		{
			printf("| %d |->", (temp->data));
			temp = temp->next;
		}while(temp != head);
		printf("\n");
	}
	else
	{
		printf("Linked list not available !!!\n");	
	}
}

void insert_at_first(struct node** head) // Function to insert a new node at frst position in the linked list
{
	struct node* newnode = NULL;
	struct node* tempnode = *head;
	
	newnode = create_node();
	if(*head == NULL)
	{
		*head = newnode;
		newnode->next = *head;
	}
	else
	{
		newnode->next = *head;
		while(tempnode->next != *head)
		{
			tempnode  = tempnode->next;
		}
		*head = newnode;
		tempnode->next = *head;
	}
}

void insert_at_last(struct node** head) // Function to insert a new node at last position in the linked list
{
	create_linkedlist(head);
}	

void insert_at_pos(struct node** head) // Function to insert a new node at any particular position in the linked list
{	
	int pos, count, i;
	struct node* newnode = NULL;
	struct node* tempnode = *head;
	
	count = num_of_nodes(*head);
	printf("Please, Enter the position (from 1 to %d) you want to insert the new node at : ", count+1);
	scanf("%d", &pos);
	if(pos ==1)
	{
		insert_at_first(head);
	}
	else if(pos == count+1)
	{
		insert_at_last(head);
	}
	else if(pos>1 && pos<count+1)
	{
		newnode = create_node();
		for(i = 1; i<pos-1; i++)
		{
			tempnode = tempnode->next;
		}
		newnode->next = tempnode->next;
		tempnode->next = newnode;
	}
	else
	{
		printf("Invalid position !!!\n");
		insert_at_pos(head);
	}	
}

void delete_at_first(struct node** head) // Function to delete the node from first position in the linked list
{
	struct node* tempnode = *head;
	struct node* temp = *head;
	if(*head != NULL)
	{
		if((*head)->next == *head)
		{
			*head = NULL;
			free(tempnode);
		}
		else
		{
			while(temp->next != *head)
			{
				temp = temp->next;
			}
			*head = tempnode->next;
			temp->next = *head;
			free(tempnode);
		}
	}
	else
	{
		printf("Linked list not available !!!\n");
	}
}

void delete_at_last(struct node** head) // Function to delete the node from last position in the linked list
{
	struct node* tempnode = *head;
	
	if(tempnode->next == *head)
	{	
		*head = NULL;
		free(tempnode);
	}
	else if((tempnode->next)->next == *head)
	{
		tempnode = tempnode->next;
		free(tempnode);
		(*head)->next = *head;
	}
	else
	{
		while((tempnode->next)->next != *head)
		{
			tempnode = tempnode->next;
		}
		free(tempnode->next);
		tempnode->next = *head;
	}
}

void delete_at_pos(struct node** head) // Function to delete the node from any particular position n the linked list
{
	int pos, count, i;
	struct node* tempnode = *head;
	struct node* temp = *head;
	
	if(*head != NULL)
	{
		count = num_of_nodes(*head);
		printf("Please, Enter the position (from 1 to %d) you want to delete the node from : ", count);
		scanf("%d", &pos);
		if(pos ==1)
		{
			delete_at_first(head);
		}
		else if(pos == count)
		{
			delete_at_last(head);
		}
		else if(pos>1 && pos<count)
		{
			for(i = 1; i<pos-1; i++)
			{
				tempnode = tempnode->next;
			}
			temp = tempnode->next;
			tempnode->next = temp->next;
			free(temp);
		}
		else
		{
			printf("Invalid position !!!\n");
			delete_at_pos(head);
		}
	}
	else
	{
		printf("Linked list is empty !!!\n");
	}
}

void main()
{
	int choice;
	struct node* first = NULL;
	
	do
	{
		printf("-------------------- Linked list menu --------------------\n");
		printf("1. Create the linked list\n2. Display the linked list\n3. Insert a new node at first location\n4. Insert a new node at last position\n5. Insert a new node at any particular position\n6. Delete the node from first position\n7. Delete the node from last position\n8. Delete the node from any particular position\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d" , &choice);
		
		switch(choice)
		{
			case 1: create_linkedlist(&first);
				break;
			case 2: display_linkedlist(first);
				break;
			case 3: insert_at_first(&first);
				break;
			case 4: insert_at_last(&first);
				break;
			case 5: insert_at_pos(&first);
				break;
			case 6: delete_at_first(&first);
				break;
			case 7: delete_at_last(&first);
				break;
			case 8: delete_at_pos(&first);
				break;
		}
	}while(choice != 0);
}

