/* QUE. 7: C program to represent a matrix of strings using Dynamic Memory Allocation
PPA8_Shivam_Bhawar */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char*** p = NULL; // NULL Pointer
	char temp;
	int num_of_rows,num_of_columns,length,i,j,k;
	
	printf("Enter the number of rows for the matrix :\n");
	scanf("%d",&num_of_rows);
	
	printf("Enter the number of columns for the matrix :\n");
	scanf("%d",&num_of_columns);
	
	p = (char ***) malloc (num_of_rows*sizeof(char*)); // Memory Allocation
	
	for(i=0;i<num_of_rows;i++) // Memory Allocation
		{
			*(p+i) = (char**) malloc (num_of_columns*sizeof(char*));
		}
		
	for(i=0;i<num_of_rows;i++)
		{
			for(j=0;j<num_of_columns;j++)
				{		
					k=0;
					length=1;
					(*(*(p+i)+j)) = (char*) malloc (sizeof(char)+0); // Memory Allocation
					(*(*(*(p+i)+j) + 0)) = '\0';
					
					printf("Enter the string:\n");	
					scanf(" ");
					do
						{
							scanf("%c",&temp);
							
							if(temp != '\n')
								{
									length++;
									*(*(p+i)+j) = realloc (*(*(p+i)+j),length*sizeof(char)); // Memory Reallocation
									*(*(*(p+i)+j) + k) = temp;
									*(*(*(p+i)+j) + (k + 1)) = '\0';
									k++;
								}
						}while(temp != '\n');
				}
		}
		
	printf("Matrix :\n");
	for(i=0;i<num_of_rows;i++) 
		{	
			printf("|\t");
			for(j=0;j<num_of_columns;j++)
				{	
					printf("%s\t",   *(*(p+i)+j)  );
				}
			printf("|\n");
		} 
		
	for(i=0;i<num_of_rows;i++) // Memory Deallocation
		{
			for(j=0;j<num_of_columns;j++)
				{		
					free(*(*(p+i)+j));
				}
		}
		
	for(i=0;i<num_of_rows;i++) // Memory Deallocation
		{
			free(*(p+i));
		}
	
	free(p); // Memory Deallocation
}
