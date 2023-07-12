#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int search(int ar[],int size,int num)
{
	for(int i=0;i<size;i++)
	{
		if(ar[i]==num)
		{
			return i;
		}
	}
	return -1;
}
void random_number(int arr[],int num)
{
	srand(time(0));
	for(int i=0;i<10;i++)
	{
		arr[i]=rand()%10;
	}
	
}
int main()
{
	int arr[10],num;
	printf("Enter the number you want to search :");
	scanf("%d",&num);
	int result=search(arr,10,num);
	if(result!=-1)
	{
		printf("The number found at index %d",result);
	}
	else{
		printf("Number not found ");
	}
	
}