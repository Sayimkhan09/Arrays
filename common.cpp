#include<stdio.h>
int check(int ar1[],int ar2[],int size1, int size2)
{
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			if(ar1[i]==ar2[j])
			{
				printf("%d and %d is common\n",ar1[i],ar2[j]);
			}
		}
	}
	printf("\n");
}
int main()
{
	int ar1[]={2,7,9,3,6};
    int ar2[]={3,5,7,9,10};
	check(ar1,ar2,5,5);
	
	return 0;
}