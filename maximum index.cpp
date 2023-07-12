#include<Stdio.h>
void input(int arr[],int n)
{
	printf("Enter 5 numbers :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int index(int ar[],int n)
{
	int max=ar[0];
	int max_index=0;
	for(int i=1;i<n;i++)
	{
		if(ar[i]>max)
		{
			max=ar[i];
			max_index=i;
		}
		
	}
	return max_index;
}
int main()
{
	int ar[5];
	input(ar,5);
	int ind=index(ar,5);
	printf("The Maximum index is %d",ind);
}