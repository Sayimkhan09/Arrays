#include<stdio.h>
#include<math.h>
void input(int arr[],int n)
{
	printf("Enter 5 numbers:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int sum(int ar[],int n)
{
	int s= ar[0];
	for(int i=1;i<=n;i++)
	{
		s=s+ar[i];
	}
	return s;
}
int main()
{
	int ar[5];
	input(ar,5);
	int sm=sum(ar,5);
	printf("The sum is %d ",sm);
}