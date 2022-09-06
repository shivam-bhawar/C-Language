/* QUE.10: C program to print all Fibonacci series upto each ASCII code of alphabets in given string
PPA8_Shivam_Bhawar */
#include <stdio.h>
void main()
 {	
 	char str[100];
 	int i,n,num1,num2,sum;
 	printf("Enter a string:\n");
 	//Accept a string from the user
 	fgets(str,sizeof(str)+1,stdin);
 	
 	printf("Fibonacci series up to:\n");
 	for(i=0;str[i]!='\n';i++)
 		{
			num1=0;
			num2=1;
			sum=0;

			printf("%c (%d) = ",str[i],str[i]);
			n=str[i];
			while(sum<=n)
			{
			printf("%d ",num1);
			sum=num1+num2;
			num1=num2;
			num2=sum;
			}
			printf("%d\n",num1);
		}
}
