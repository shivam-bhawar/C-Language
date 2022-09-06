/* QUE. 6: C program to represent 2-D array (Matrix) using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int** p = NULL; // NULL Pointer
	int num_of_rows,num_of_columns,i,j;
	
	printf("Enter the number of rows for the matrix:\n");
	scanf("%d",&num_of_rows);
	
	printf("Enter the number of columns for the matrix:\n");
	scanf("%d",&num_of_columns);
	
	p = (int **) malloc (num_of_rows*sizeof(int*)); // Memory Allocation
	
	for(i=0;i<num_of_rows;i++)
		{
			*(p+i) = (int*) malloc (num_of_columns*sizeof(int*)); // Memory Allocation
		}
		
	printf("Enter the elements to be entered in the matrix:\n");
	for(i=0;i<num_of_rows;i++) // Accept the elements to be entered in the matrix
		{
			for(j=0;j<num_of_columns;j++)
				{	
					scanf("%d",(*(p+i)+j));
				}
		}
	
	printf("Matrix :\n");
	for(i=0;i<num_of_rows;i++) // Print all the elements entered in the matrix
		{	
			printf("|\t");
			for(j=0;j<num_of_columns;j++)
				{	
					printf("%d\t",(*(*(p+i)+j)));
				}
			printf("|\n");
		}
		
	for(i=0;i<num_of_rows;i++) // Memory Deallocation
		{
			free(*(p+i));
		}
	
	free(p); // Memory Deallocation
}
