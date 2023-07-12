#include<stdio.h>
void input(int ar[],int n)
{
	printf("ENter 5 numbers :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
}
int sum_odd(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
	
	if(arr[i]%2!=0)
	{
		sum=sum+arr[i];
	}
}
return sum;
}
int main()
{
	int ar[5];
	input(ar,5);
	int sm=sum_odd(ar,5);
	printf("The sum of Odd Numbers is %d",sm);
}