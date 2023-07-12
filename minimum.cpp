#include<stdio.h>
void input(int arr[],int num)
{
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
}


int smallest(int arr[], int num)
{
	int min=arr[0];
	for(int i=1;i<num;i++)
	{
		if(arr[i]<min)
		{
	    min=arr[i];
	}
	}
	return min;
}
main()
{
	int n=5;
	int arr[n];
	input(arr,n);
	int min=smallest(arr,n);
	printf("%d is minimum",min);
}