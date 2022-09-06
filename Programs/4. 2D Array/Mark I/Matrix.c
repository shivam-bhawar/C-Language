/* QUE. 1: C program to read and print a RxC matrix, R(rows) and C(columns) must be given by the user
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
	for(i=0;i<R;i++) // Accept all the elements of matrix
		{
			for(j=0;j<C;j++)
				{
					scanf("%d",&array[i][j]);
				}
		}
	
	printf("Matrix is:\n");
	for(i=0;i<R;i++) // Print all the elements of matrix
		{
			printf("|\t");
			for(j=0;j<C;j++)
				{
					printf("%d\t",array[i][j]);
				}
			printf("|\n");
		}
}
