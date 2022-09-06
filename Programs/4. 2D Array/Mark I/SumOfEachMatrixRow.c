/* QUE. 4: C program to find sum of all elements of each row of a matrix
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[10][10],R,C,i,j,sum_of_row=0;
	
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
	for(i=0;i<R;i++) // Print all the elements form the matrix and calculate and print sum of each row of matrix
		{
			sum_of_row=0;
			printf("|\t");
			for(j=0;j<C;j++)
				{
					printf("%d\t",array[i][j]);
					sum_of_row=sum_of_row+array[i][j];
				}
			printf("|\t");
			printf("Sum of row = %d\n",sum_of_row);
		}
}
