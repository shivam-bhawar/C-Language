/* QUE.7: C program to accept two arrays from the user and print'em in one single array
PPA8_Shivam_Bhawar */
#include<stdio.h>
void main()
	{
		int array1[100],array2[100],array3[200],num_of_elements1,num_of_elements2,num_of_elements3,i,j;

		printf("Enter the number of elements you want to store in the first array:\n");
		label_1: // Restarts from here if user enters the wrong  size for the first array
		scanf("%d",&num_of_elements1);
		if(num_of_elements1>0 && num_of_elements1<=100)
			{
				printf("Enter the number of elements you want to store in the second array:\n");
				label_2: // Restarts from here if user enters the wrong size for the second array
				scanf("%d",&num_of_elements2);

				num_of_elements3 = num_of_elements1 + num_of_elements2;

				if(num_of_elements2>0 && num_of_elements2<=100)
					{
						printf("Enter the elements you want to store in the first array:\n");
						for(i=0;i<num_of_elements1;i++) // Accept all the elements to be stored in the first array
							{
								scanf("%d",&array1[i]);
							}

						printf("Enter the elements you want to store in the second array:\n");
						for(i=0;i<num_of_elements2;i++) // Accept all the elements to be stored in the second array
							{
								scanf("%d",&array2[i]);
							}

						for(i=0;i<num_of_elements1;i++) // Copy all the elements from the first array in the third array
							{
								array3[i]=array1[i];
							}

						for(j=0;j<num_of_elements2;j++) // Copy all the elements from the second array in the third array
							{
								array3[i]=array2[j];
								i++;
							}

						printf("First Array = [ ");
						for(i=0;i<num_of_elements1;i++) // Print all the elements stored in the first array
							{
								printf("%d ",array1[i]);
							}
						printf("]\n");
			
						printf("Second Array = [ ");
						for(i=0;i<num_of_elements2;i++) // Print all the elements stored in the second array
							{
								printf("%d ",array2[i]);
							}
						printf("]\n");

						printf("Final Array = [ ");
						for(i=0;i<num_of_elements3;i++) // Print all the elements stored in the third array
							{
								printf("%d ",array3[i]);
							}
						printf("]\n");
					}
				else // If user enters the wrong size for the second array
					{
						printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
						goto label_2;
					}
			}
		else // If user enters the wrong size for the first array
			{
				printf("WRONG CHOICE!!! Enter the number of elements from 1 to 100:\n");
				goto label_1;
			}
}
