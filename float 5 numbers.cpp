#include<stdio.h>

 void flot(float ar[], float num)
{
	for(int i=0;i<num;i++)
	{
		printf("Enter float values :");
		scanf("%f",&ar[i]);
	}
}
void ret(float ar[],float num)
{
	printf("The Float values are \n ------------------------\n");
	for(int i=0;i<num;i++)
	{
		printf("%f is the Float values \n",ar[i]);
	}
}
int main()
{
	float arr[5];
	flot(arr,5);
	ret(arr,5);
}