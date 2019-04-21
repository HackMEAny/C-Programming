// C program for implementation of Bubble sort 
#include <stdio.h> 
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void bubbleSort(int arr[],int n)
{
int i,j;
for (i=0;i<n-1;i++)
	for (j=0;j<n-i-1;j++)
		if (arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);
}
void printArray(int arr[],int size) 
{ 
	int i;
	for (i=0;i<size;i++)
		printf("%d\t",arr[i]);
}
int main()
{
	int j,i,arr[i];
	printf("Enter the no of array elements:-");
	scanf("%d",&j);
	printf("Enter the elements in the array:-");
	for(i=0;i<j;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,j);
	printf("Sorted array: \n");
	printArray(arr,j);
	return 0;
}
