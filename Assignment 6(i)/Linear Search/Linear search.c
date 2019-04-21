/* Linear search */
#include <stdio.h>
int main()
{
	int arr[100],s,c,n;
	printf("Enter number of elements in array:-");//Linear search
	scanf("%d",&n);
	printf("Enter %d integer(s):-", n);
	for(c=0;c<n;c++)
	    scanf("%d",&arr[c]);
	printf("Enter a number to search:-");
	scanf("%d",&s);
	for(c=0;c<n;c++)
	{
		if(arr[c]==s)
		{
			printf("%d is present at location %d.\n",s,c+1);
			break;
    	}
	}
	if(c==n)
		printf("%d isn't present in the array.\n", s);
	return 0;
}
