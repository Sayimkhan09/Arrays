#include<Stdio.h>
void input(int arr[],int size)
{
	printf("Enter the Element of array :");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void occurence(int arr[],int size)
{
	int total=0;
	for(int i=0;i<size;i++)
	{
		int count=0;
		for(int j=0;j<size;j++)
		{
			total++;
			if(arr[i]==arr[j])
			count ++;
		}
		printf("The element %d occurs %d time\n",arr[i],count);
	}
	printf("The total Number of comaparison is %d\n",total);
}
int main()
{
	int size;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	int arr[size];
	input(arr,size);
	occurence(arr,size);
	
}