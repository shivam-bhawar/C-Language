/* QUE. 6: C program to accept a matrix and print it's diagonal elements
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[10][10],R,C,i,j;
	
	printf("Enter the number of rows:\n");
	scanf("%d",&R);
	printf("Enter the number of columns:\n");
	scanf("%d",&C);
	
	printf("Enter the elements:\n");
	for(i=0;i<R;i++) // Accept all the elements for the matrix
		{
			for(j=0;j<C;j++)
				{
					scanf("%d",&array[i][j]);
				}
		}

	printf("Matrix is:\n");
	for(i=0;i<R;i++) // Print all the elements from the matrix
		{
			printf("|\t");
			for(j=0;j<C;j++)
				{
					printf("%d\t",array[i][j]);
				}
			printf("|\n");
		}
			
	printf("Diagonal elements are:\n");
	for(i=0;i<R;i++) // Print only the diagonal elements from the matrix
		{
			for(j=0;j<C;j++)
				{	
					if(i==j)
						{
							printf("%d\t",array[i][j]);
						}
				}
		}
	printf("\n");
}
