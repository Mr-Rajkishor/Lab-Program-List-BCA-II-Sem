/*                                         Program:- 5
Read an array of 8 integers and also read a number to be searched. If search number is found 
then print its position & if not found then print appropriate message.
                                                                                           */
#include<stdio.h>
void main()
{
	int num[8],n;
	{printf("Enter the 8 integers number\n");
	for (int i = 0; i < 8; i++)
		scanf("%d",&num[i]);
	}
	printf("Enter a number we want to find:- ");
	scanf("%d",&n);
	for (int i = 0; i < 8; i++)
	{
		if (n==num[i])
		{
			printf("Position %d of number %d. is",i,n);
		}
	}
}