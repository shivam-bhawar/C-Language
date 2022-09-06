/* QUE. 7: C program to print Transpose matrix of given matrix using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int** p,num_of_rows,num_of_columns,i,j;
	p = NULL; // NULL Pointer
	
	printf("Enter the number of rows for the matrix:\n");
	scanf("%d",&num_of_rows);
	
	printf("Enter the number of columns for the matrix:\n");
	scanf("%d",&num_of_columns);
	
	p = (int **) malloc (num_of_rows*sizeof(int*)); // Memory Allocation
	
	for(i=0;i<num_of_columns;i++)
		{
			*(p+i) = (int*) malloc (num_of_columns*sizeof(int));
		}
		
	printf("Enter the elements in the matrix:\n");
	for(i=0;i<num_of_rows;i++)
		{
			for(j=0;j<num_of_columns;j++)
				{	
					scanf("%d",(*(p+i)+j));
				}
		}
	
	printf("Matrix :\n");
	for(i=0;i<num_of_rows;i++)
		{	
			printf("|\t");
			for(j=0;j<num_of_columns;j++)
				{	
					printf("%d\t",(*(*(p+i)+j)));
				}
			printf("|\n");
		}
		
	printf("Transpose Matrix :\n");
	for(i=0;i<num_of_rows;i++)
		{	
			printf("|\t");
			for(j=0;j<num_of_columns;j++)
				{	
					printf("%d\t",(*(*(p+j)+i)));
				}
			printf("|\n");
		}
}

