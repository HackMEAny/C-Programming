#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(i==j || i+j==4)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
}
