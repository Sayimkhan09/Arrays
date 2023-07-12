#include<stdio.h>
void reverse(int arr[], int n)
{
	for(int i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	reverse(arr,5);
	
}