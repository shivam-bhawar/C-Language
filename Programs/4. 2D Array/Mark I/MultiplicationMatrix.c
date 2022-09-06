/* QUE. 7: C program to find multiplication matrix of two matrices
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
{
	int array1[10][10],array2[10][10],multiplication[10][10],R1,C1,R2,C2,i,j,k;
	
	label:
	printf("Enter the number of rows for first matrix:\n");
	scanf("%d",&R1);
	printf("Enter the number of columns for first matrix:\n");
	scanf("%d",&C1);
	printf("Enter the number of rows for second matrix:\n");
	scanf("%d",&R2);
	printf("Enter the number of columns for second matrix:\n");
	scanf("%d",&C2);
	
	if(C1==R2)
		{
			printf("Enter the elements for first matrix:\n");
			for(i=0;i<R1;i++) // Accept all the elements for the first matrix
				{
					for(j=0;j<C1;j++)
						{
							scanf("%d",&array1[i][j]);
						}
				}
				
			printf("Enter the elements for second matrix:\n");
			for(i=0;i<R2;i++) // Accept all the elements for the second matrix
				{
					for(j=0;j<C2;j++)
						{
							scanf("%d",&array2[i][j]);
						}
				}
			
			printf("First matrix is:\n");
			for(i=0;i<R1;i++) // Print all the elements from the first matrix
				{
					printf("|\t");
					for(j=0;j<C1;j++)
						{
							printf("%d\t",array1[i][j]);
						}
					printf("|\n");
				}
				
			printf("Second matrix is:\n");
			for(i=0;i<R2;i++) // Print all the elements from the second matrix
				{
					printf("|\t");
					for(j=0;j<C2;j++)
						{
							printf("%d\t",array2[i][j]);
						}
					printf("|\n");
				}

			for(i=0;i<R1;i++) // Calculate the multiplication matrix of both matrices
				{
					for(j=0;j<C1;j++)
						{
							multiplication[i][j]=0;
							for(k=0;k<C1;k++)
								{
									multiplication[i][j]=multiplication[i][j]+(array1[i][k]*array2[k][j]);
								}
						}
				}	

			printf("Multiplication matrix is:\n");
			for(i=0;i<R1;i++) // Print all the elements from the multiplication matrix
				{
					printf("|\t");
					for(j=0;j<C2;j++)
						{
							printf("%d\t",multiplication[i][j]);
						}
					printf("|\n");
				}
		}
	else
		{
			 printf("Number columns of first matrix and number of rows of second matrix must be equal\n");
			 goto label;
		}	
} 
