/* Swap two nos using Call By Value*/

#include<stdio.h>
int swap(int,int);
main()
{
	int a,b;
	printf("Enter two nos:-");
	scanf("%d %d",&a,&b);
	swap(a, b);
}
int swap(int p, int q)
{
	int t=0;
	t=p;
	p=q;
	q=t;
	printf("The swapped nos are %d %d",p,q);
	return p,q;
}
