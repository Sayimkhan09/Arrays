#include<stdio.h>
#include<conio.h>
void simple(int ar1[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		printf("Enter the Array : ");
		scanf("%d",&ar1[i]);
	}
}
void display(int arr[], int num)
{
	printf("Elements of array :");
	for(int i=0;i<num;i++)
	{
	printf("%d ,",arr[i]);	
	}
	printf("\n");
}
int main()
{
	int numbers[5];
	simple(numbers, 5);
	display(numbers,5);
	return 0;
}