/* QUE. 2: C program to read two matrices and find sum of both matrices
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array1[10][10],array2[10][10],sum[10][10],R1,C1,R2,C2,i,j;
	
	label:
	printf("Enter the number of rows for first matrix:\n");
	scanf("%d",&R1);
	printf("Enter the number of columns for first matrix:\n");
	scanf("%d",&C1);
	
	printf("Enter the number of rows for second matrix:\n");
	scanf("%d",&R2);
	printf("Enter the number of columns for second matrix:\n");
	scanf("%d",&C2);
	
	if(R1==R2 && C1==C2)
		{
			printf("Enter the elements for first matrix:\n");
			for(i=0;i<R1;i++) // Accept the elements for the first matrix
				{ 
					for(j=0;j<C1;j++)
						{
							scanf("%d",&array1[i][j]);
						}
				}
				
			printf("Enter the elements for second matrix:\n");
			for(i=0;i<R2;i++) // Accept the elements for the second matrix
				{
					for(j=0;j<C2;j++)
						{
							scanf("%d",&array2[i][j]);
						}
				}
			
			printf("First Matrix is:\n");
			for(i=0;i<R1;i++) // Print the elements from the first matrix
				{
					printf("|\t");
					for(j=0;j<C1;j++)
						{
							printf("%d\t",array1[i][j]);
						}
					printf("|\n");
				}
				
			printf("Second Matrix is:\n");
			for(i=0;i<R2;i++) // Print the elements from the second matrix
				{
					printf("|\t");
					for(j=0;j<C2;j++)
						{
							printf("%d\t",array2[i][j]);
						}
					printf("|\n");
				}
		
			for(i=0;i<R1;i++) // Add the first and the second matrix and store in third "sum" matrix
				{
					for(j=0;j<C1;j++)
						{
							sum[i][j]=array1[i][j]+array2[i][j];
						}
				}
				
			printf("Addition Matrix of first and second matrix is:\n");
			for(i=0;i<R1;i++) // Print the elements from the sum matrix
				{
					printf("|\t");
					for(j=0;j<C1;j++)
						{
							printf("%d\t",sum[i][j]);
						}
					printf("|\n");
				}
		}	
	else // If user enters a wrong choice
		{
			printf("Number of rows and columns of the first and the second matrix must be equal:\n");
			goto label;
		}
}
