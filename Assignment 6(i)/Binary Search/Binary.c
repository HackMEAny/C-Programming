// C program to implement recursive Binary Search 
#include <stdio.h> 
int binarySearch(int arr[],int l,int r,int x)
{
	if(r>=l)
	{
		int mid=l+(r-l)/2;
		if (arr[mid]==x)
			return mid;
		if (arr[mid]>x)
			return binarySearch(arr,l,mid-1,x);
		return binarySearch(arr,mid+1,r,x);
	}
	return -1;
}
int main(void) 
{
	int x,i,j,arr[i];
	printf("Enter the no of array elements:-");
	scanf("%d",&j);
	printf("Enter the elements in the array:-");
	for(i=1;i<=j;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the no you want to search:-");
	scanf("%d",&x);
	int result=binarySearch(arr,1,j,x);
	(result==-1)?printf("Element is not present in array"):printf("Element is present at index %d",result);
	return 0;
}
