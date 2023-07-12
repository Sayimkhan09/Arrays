#include<stdio.h>
int value(int ar[],int n)
{
	printf("Enter 5  numbers :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
}
int max(int arr[], int n)
{
	int maxi=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxi)
		{
		    maxi=arr[i];
		}
	}
	return maxi;
	}
int main()
{
	int arr[5];
	value(arr,5);
	int m=max(arr,5);
	printf("%d is maximum in all",m);
	return 0;
}