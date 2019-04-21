/*~~~ Finding factorial using recursion ~~~*/
#include <stdio.h>
int fact(int);
int main()
{
    int num,result;
    printf("Enter a number to find it's Factorial: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Factorial of negative number not possible\n");
    else
    {
        result=fact(num);
        printf("The Factorial of %d is %d.\n", num, result);
    }
    return 0;
}
int fact(int num)
{
    if (num==0 || num==1)
        return 1;
    else
        return(num*fact(num-1));
}
