/* QUE. 2b: C program to read a matrix and find sum of all elements
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[10][10],R,C,i,j,sum=0;
	
	printf("Enter the number of rows:\n");
	scanf("%d",&R);
	printf("Enter the number of columns:\n");
	scanf("%d",&C);
	
	printf("Enter the elements:\n");
	for(i=0;i<R;i++) // Accept all elements for the matrix
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
	
	for(i=0;i<R;i++) // Calculate the sum of all elements from the matrix
		{
			for(j=0;j<C;j++)
				{
					sum=sum+array[i][j];
				}
		}
	printf("Sum of all elements of matrix is:\nSum = %d\n",sum);
}
