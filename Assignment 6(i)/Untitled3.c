#include<stdio.h>
main()
{
	int a,arr[5],i,c=0,t;
	for(i=1;i<=5;i++)
	{
		printf("Enter the %d element of the array:- ",i);
		scanf("%d",&arr[i]);
	}
	printf("The elements are:-\n");
	for(i=1;i<=5;i++)
	{
		printf("%d \t",arr[i]);
		c=arr[0];
		if(arr[i]>arr[i+1])
		{
			t=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=t;
		}
		printf("%d",t);
	}
	
}
