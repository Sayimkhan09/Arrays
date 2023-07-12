#include<stdio.h>
void input(int ar[],int n)
{
	printf("Enter 5 Numbers :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
}
int even_index(int arr[],int n)
{
	int sum=0;
	for(int i=1;i<=n;i+=2)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int arr1[5];
	input(arr1,5);
	int sum=even_index(arr1,5);
	printf("The sum of even Index is %d",sum);
}
