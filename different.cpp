#include<stdio.h>
int check(int ar1[],int ar2[],int size1,int size2)
{
	for(int i=0;i<size1;i++)
	{
		int found=0;
		for(int j=0;j<size2;j++)
		{
			if(ar1[i]==ar2[j])
			{
				found =1;
			}
			
		}
		if(!found)
		{
			printf("%d is not common\n",ar1[i]);
		}
	}
	printf("\n");
}
int main()
{
	int ar1[]={2,7,9,3,6};
	int ar2[]={3,5,7,9,10};
	check(ar1,ar2,5,5);
	
}