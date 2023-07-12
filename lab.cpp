#include<stdio.h>
 void input(int n)
 {
 	int arr1[n] ; int arr2[n] ; int arr3[n] ;
 	for(int i=0;i<n;i++)
 	{
 		printf("Enter first array :");
 		scanf("%d",&arr1[i]);
 		printf("ENter second Array : ");
 		scanf("%d",&arr2[i]);
 		arr3[i]=arr1[i]+arr2[i];
	 }
	 for(int j=0;j<n;j++)
	 {
	 	printf("%d",arr3[j]+1);
	 }
 }
 int main()
 {int n;
 	int a1[n];
	 int a2[n];
	 int a3[n];
 	printf("Enter total numbers of elements : ");
 	scanf("%d",&n);
 	input(n);
 }