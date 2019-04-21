#include<stdio.h>
#include<math.h>
main()
{
	int i,j,n=5,k;
	for(i=1;i<=n;i++)
	{
		for(k=(i-1);k<n;k++)
		{
			printf(" ");
		}
		for(k=i-1;k>=-(i-1);k--)
		{
			printf("%d",i-abs(k));
		}
		printf("\n");
	}
}
