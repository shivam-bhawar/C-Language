/* QUE. 3: C program to read a matrix and find product of all elements
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[10][10],R,C,i,j,product=1;
	
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
	for(i=0;i<R;i++) // Print all the elements form the matrix
		{
			printf("|\t");
			for(j=0;j<C;j++)
				{
					printf("%d\t",array[i][j]);
				}
			printf("|\n");
		}
			
	for(i=0;i<R;i++) // Calculate the product of all elements from the matrix
		{
			for(j=0;j<C;j++)
				{
					product=product*array[i][j];
				}
		}
	printf("Product of all elements of matrix is:\nProduct = %d\n",product);
}
