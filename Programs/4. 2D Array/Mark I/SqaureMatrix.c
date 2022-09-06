/* QUE. 9: C program to check whether the given matrix is a square matrix or not
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
	for(i=0;i<R;i++) // Print all the elements form the matrix
		{
			printf("|\t");
			for(j=0;j<C;j++)
				{
					printf("%d\t",array[i][j]);
				}
			printf("|\n");
		}
	
	if(R==C)
		{
			printf("Yes, given matrix is a square matrix\n");
		}
	else
		{
			printf("No, given matrix is'nt a square matrix\n");
		}
}
