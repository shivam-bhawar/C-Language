/* QUE. 2: C program to find out a multiplication matrix using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int** p = NULL; // NULL Pointer
	int** q = NULL; // NULL Pointer
	int** multiplication_matrix  = NULL; // NULL Pointer
	int R1,C1,R2,C2,i,j,k;	

	printf("Enter the number of rows for the first matrix:\n");
	scanf("%d",&R1);
	
	printf("Enter the number of columns for the first matrix:\n");
	scanf("%d",&C1);
	
	label:
	printf("Enter the number of rows for the second matrix:\n");
	scanf("%d",&R2);
	
	printf("Enter the number of columns for the second matrix:\n");
	scanf("%d",&C2);	
	
	if(C1 == R2)
		{
			p = (int **) malloc (C1*sizeof(int*)); // Memory Allocation
			
			for(i=0;i<C1;i++)
				{
					*(p+i) = (int*) malloc (R1*sizeof(int)); // Memory Allocation
				}
			
			printf("Enter the elements to be entered in the first matrix:\n");
			for(i=0;i<R1;i++) // Accept the elements to be entered in the first matrix
				{
					for(j=0;j<C1;j++)
						{	
							scanf("%d",(*(p+i)+j));
						}
				}

			q = (int **) malloc (R2*sizeof(int*)); // Memory Allocation
			
			for(i=0;i<C2;i++)
				{
					*(q+i) = (int*) malloc (C2*sizeof(int)); // Memory Allocation
				}
			
			printf("Enter the elements to be entered in the second matrix:\n");
			for(i=0;i<R2;i++) // Accept the elements to be entered in the second matrix
				{
					for(j=0;j<C2;j++)
						{	
							scanf("%d",(*(q+i)+j));
						}
				}
			
			printf("First Matrix :\n");
			for(i=0;i<R1;i++) // Print the elements entered in the first matrix
				{	
					printf("|\t");
					for(j=0;j<C1;j++)
						{	
							printf("%d\t",(*(*(p+i)+j)));
						}
					printf("|\n");
				}
				
			printf("Second Matrix :\n");
			for(i=0;i<R2;i++) // Print the elements entered in the second matrix
				{	
					printf("|\t");
					for(j=0;j<C2;j++)
						{	
							printf("%d\t",(*(*(q+i)+j)));
						}
					printf("|\n");
				}
				
			multiplication_matrix = (int **) malloc (R1*sizeof(int*)); // Memory Allocation
			
			for(i=0;i<C2;i++)
				{
					*(multiplication_matrix+i) = (int*) malloc (C2*sizeof(int)); // Memory Allocation
				}
				
			for(i=0;i<R1;i++) // Calculate the multiplication matrix of both matrices
				{
					for(j=0;j<C2;j++)
						{
							(*(*(multiplication_matrix+i)+j))=0;
							for(k=0;k<C1;k++)
								{
									(*(*(multiplication_matrix+i)+j))=(*(*(multiplication_matrix+i)+j))+(*(*(p+i)+k)) * (*(*(q+k)+j));
								}
						}
				}
			
			printf("Multiplication matrix :\n");
			for(i=0;i<R1;i++) // Print the elements in the multiplication matrix
				{	
					printf("|\t");
					for(j=0;j<C2;j++)
						{	
							printf("%d\t",(*(*(multiplication_matrix+i)+j)));
						}
					printf("|\n");
				}
		}
	else
		{
			printf("Number of columns of the first matrix and Number of rows of the second matrix must be same:\n");
			goto label;
		}
		
	for(i=0;i<R1;i++) // Memory Deallocation
		{
			free(*(p+i));
		}
	
	free(p); // Memory Deallocation
	
	for(i=0;i<R2;i++) // Memory Deallocation
		{
			free(*(q+i));
		}
	
	free(q); // Memory Deallocation
	
	for(i=0;i<R1;i++) // Memory Deallocation
		{
			free(*(multiplication_matrix+i));
		}
	
	free(multiplication_matrix); // Memory Deallocation
}

