/* QUE. 18: C program to check whether given matrix is upper triangular matrix or not using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int** p,num_of_rows,num_of_columns,i,j,flag=0;
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
		
	for(i=0;i<num_of_rows;i++) // Check if the given matrix is an upper triangular matrix or not
		{
			for(j=0;j<num_of_columns;j++)
				{
					if(i>j)
						{
							if((*(*(p+i)+j)) != 0)
								{
									flag=1;
									break;
								}
						}
				}
		}
	if(flag==0)
		{
			printf("Yes, given matrix is an upper triangular matrix\n");
		}
	else
		{
			printf("No, given matrix is'nt an upper triangular matrix\n");
		}
}

