#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node* pre;
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
		newnode->pre = NULL;
		newnode->next = NULL;
	}
	else
	{
		printf("Memory allocation failed !!!\n");
	}
	
	return newnode;
}

void create_linkedlist(struct node** head_first, struct node** head_last) // Function to create the linked list
{
	struct node* newnode = NULL;
	
	newnode = create_node();
	if(*head_first == NULL)
	{
		*head_first = newnode;
		*head_last = newnode;
		(*head_last)->next = *head_first;
		(*head_first)->pre = *head_last;
	}
	else
	{
		newnode->pre = *head_last;
		(*head_last)->next = newnode;
		*head_last = newnode;
		(*head_last)->next = *head_first;
		(*head_first)->pre = *head_last;
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

void display_linkedlist(struct node* head_first) // Function to display the linked list in actual order 
{
	struct node* temp = head_first;
	if(head_first != NULL)
	{
		do
		{
			printf("| %d |->", (temp->data));
			temp = temp->next;
		}while(temp != head_first);
		printf("\n");
	}
	else
	{
		printf("Linked list not available !!!\n");	
	}
}

void display_rev_linkedlist(struct node* head_first, struct node* head_last) // Function to display the linked list in reverse order
{
	struct node* temp = head_last;
	if(head_first != NULL)
	{
		do
		{
			printf("| %d |->", (head_last->data));
			head_last = head_last->pre;
		}while(temp != head_last);
		printf("\n");
	}
	else
	{
		printf("Linked list not available !!!\n");
	}
}	

void insert_at_first(struct node** head_first, struct node** head_last) // Function to insert a new node at first position in the linked list
{
	struct node* newnode = NULL;
	
	newnode = create_node();
	if(*head_first == NULL)
	{
		*head_first = newnode;
		*head_last = newnode;
		(*head_last)->next = *head_first;
		(*head_first)->pre = *head_last;
	}
	else 
	{
		newnode->next = *head_first;
		(*head_first)->pre = newnode;
		*head_first = newnode;
		(*head_last)->next = *head_first;
		(*head_first)->pre = *head_last;
	}
}

void insert_at_last(struct node** head_first, struct node** head_last) // Function to insert a new node at last position in the linked list
{
	create_linkedlist(head_first, head_last);
}

void insert_at_pos(struct node** head_first, struct node** head_last) // Function to insert a new node at any particular position in the linked list
{
	int pos, count = 0, i;
	struct node* newnode = NULL;
	struct node* tempnode = *head_first;
	
	count = num_of_nodes(*head_first);
	printf("Please, Enter the position (from 1 to %d) you want to insert the new node at : ", count+1);
	scanf("%d", &pos);
	if(pos ==1)
	{
		insert_at_first(head_first, head_last);
	}
	else if(pos == count+1)
	{
		insert_at_last(head_first, head_last);
	}
	else if(pos>1 && pos<count+1)
	{
		newnode = create_node();
		for(i = 1; i<pos-1; i++)
		{
			tempnode = tempnode->next;
		}
		newnode->pre = tempnode;
		newnode->next = tempnode->next;
		(tempnode->next)->pre = newnode;
		tempnode->next = newnode;
	}
	else
	{
		printf("Invalid position !!!\n");
		insert_at_pos(head_first, head_last);
	}
}

void delete_at_first(struct node** head_first, struct node** head_last) // Function to delete a node from the first position in the linked list
{
	struct node* tempnode = *head_first;
	
	if(*head_first != NULL)
	{	
		if((*head_first)->next == *head_first) // If linked list contains only one node
		{
			*head_first = NULL;
			*head_last = NULL;
			free(tempnode);
		}
		else
		{
			*head_first = tempnode->next;
			(tempnode->next)->pre = *head_last;
			(*head_last)->next = *head_first;
			free(tempnode);
		}
	}
	else 
	{
		printf("Linked list not available !!!\n");
	}
}

void delete_at_last(struct node** head_first, struct node** head_last) // Function to delete a node from the last position in the linked list
{
	struct node* tempnode = *head_last;
	
	if(*head_first != NULL)
	{
		if((*head_first)->next == *head_first) // If linked list contains only one node
		{
			delete_at_first(head_first, head_last);
		}
		else if(((*head_first)->next)->next == NULL) // If linked list contains only two nodes
		{
			(*head_first)->next = *head_first;
			*head_last = (*head_last)->pre;
			free(tempnode);
		}
		else
		{
			(tempnode->pre)->next = *head_first;
			*head_last = tempnode->pre;
			(*head_first)->pre = *head_last;
			free(tempnode);
		}
	}
	else
	{
		printf("Linked list not available !!!\n");
	}
}

void delete_at_pos(struct node** head_first, struct node** head_last) // Function to delete a node from any particular position in the linked list
{
	int pos, count = 0, i;
	struct node* tempnode = *head_first;
	struct node* temp = NULL;
	
	count = num_of_nodes(*head_first);
	printf("Please, Enter the position (from 1 to %d) you want to delete the node at : ", count);
	scanf("%d", &pos);
	if(pos ==1)
	{
		delete_at_first(head_first, head_last);
	}
	else if(pos == count)
	{
		delete_at_last(head_first, head_last);
	}
	else if(pos>1 && pos<count)
	{
		for(i = 1; i<pos-1; i++)
		{
			tempnode = tempnode->next;
		}
		temp = tempnode->next;
		tempnode->next = temp->next;
		(temp->next)->pre = tempnode;
		free(temp);
	}
	else
	{
		printf("Invalid position !!!\n");
		delete_at_pos(head_first, head_last);
	}
}

void main()
{
	int choice;
	struct node* first = NULL;
	struct node* last = NULL;
	
	do
	{
		printf("-------------------- Linked list menu --------------------\n");
		printf("1. Create the linked list\n2. Display the linked list in actual order\n3. Display the linked list in reverse order\n4. Insert a new node at first position\n5. Insert a new node at last position\n6. Insert a new node at any particular position\n7. Delete a node from first position\n8. Delete a node from last position\n9. Delete a node from any particular position\n0. Exit\n");
		printf("Please, Enter your choice : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1: create_linkedlist(&first, &last);
				break;
			case 2: display_linkedlist(first);
				break;
			case 3: display_rev_linkedlist(first, last);
				break;
			case 4: insert_at_first(&first, &last);
				break;
			case 5: insert_at_last(&first, &last);
				break;
			case 6: insert_at_pos(&first, &last);
				break;
			case 7: delete_at_first(&first, &last);
				break;
			case 8: delete_at_last(&first, &last);
				break;
			case 9: delete_at_pos(&first, &last);
				break; 
		}
	}while(choice != 0);
}

