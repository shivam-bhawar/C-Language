/* QUE. 13: C program to demonstrate dangling pointer using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* p = NULL;
	int i,num_of_elements;
	
	printf("Enter the number of elments to be entered in the array:\n");
	scanf("%d",&num_of_elements);
	
	p = (int*) malloc (num_of_elements*sizeof(int));
	
	printf("Enter the elements to be entered in the array:\n");
	for(i=0;i<num_of_elements;i++)
		{
			scanf("%d",(p+i));
		}
	
	printf("Array = [ ");
	for(i=0;i<num_of_elements;i++)
		{
			printf("%d ",*(p+i));
		}
	printf("]\n");
	
	printf("p still holds the address = %d\n",p);
	p = NULL;
	if(p == NULL)
		{
			printf("Dangling Pointer transformed in to NULL Pointer successfully\n");
		}
}
