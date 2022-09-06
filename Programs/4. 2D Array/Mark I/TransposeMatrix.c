/* QUE. 5: C program to transpose a matrix
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array[10][10],transpose[10][10],R,C,i,j;
	
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
		
	for(i=0;i<R;i++) // Find transpose of the matrix
		{
			for(j=0;j<C;j++)
				{
					transpose[i][j]=array[j][i];
				}
		}
	
	printf("Transpose matrix is:\n");
	for(i=0;i<R;i++) // Print all the elements from the transpose matrix
		{
			printf("|\t");
			for(j=0;j<C;j++)
				{
					printf("%d\t",transpose[i][j]);
				}
			printf("|\n");
		}	
}
