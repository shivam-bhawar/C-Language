/* QUE. 5: C program to demonstrate malloc, calloc, realloc and free function
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* p = NULL; // NULL Pointer
	int i,NOE_malloc,NOE_calloc,NOE_realloc;
	
	printf("Enter the number of elements you want the memory allocated dynamically for:\n");
	scanf("%d",&NOE_malloc);
	
	p = (int*) malloc(NOE_malloc*sizeof(int)); // Memory Allocation
	if(p != NULL)
		{
			printf("Memory Allocated Successfully\n[ ");
			
			for(i=0;i<NOE_malloc;i++)
				{
					printf("%d ",*(p+i));
				}
			printf("]\n");
		}
	
	printf("Enter the number of elements you want the contiguous memory allocated dynamically for:\n");
	scanf("%d",&NOE_calloc);
	
	p = (int*) calloc(NOE_calloc,sizeof(int)); // Contiguous Memory Allocation
	if(p != NULL)
		{
			printf("Contiguous Memory Allocated Successfully\n[ ");
			
			for(i=0;i<NOE_calloc;i++)
				{
					printf("%d ",*(p+i));
				}
			printf("]\n");
		}
		
	printf("Enter the number of elements you want the memory re-allocated dynamically for:\n");
	scanf("%d",&NOE_realloc);
	p = realloc(p, NOE_realloc*sizeof(int)); // Memory Reallocation
	if(p != NULL)
		{
			printf("Memory Re-allocated Successfully\n[ ");
			
			for(i=0;i<NOE_realloc;i++)
				{
					printf("%d ",*(p+i));
				}
			printf("]\n");
		}

	free(p); // Memory De-allocation

	printf("Memory De-allocated successfully\n");
}
