#include<stdio.h>
int input(int ar1[],int num)
{
	printf("Enter 5 Numbers :");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&ar1[i]);
	}
}
int second_largest(int ar[],int n)
{
	int largest=ar[0];
	int s_largest=ar[0];
	for(int i=1;i<n;i++)
	{
		if(ar[i]>largest)
		{
			s_largest = largest;
			largest=ar[i];
		}
		else if(ar[i]>s_largest && ar[i]<largest)
		{
			s_largest=ar[i];
		}
	}
	return s_largest;
}
int main()
{
	int arr[5];
	input(arr,5);
	int s=second_largest(arr,5);
	printf("%d is second largest",s);
}