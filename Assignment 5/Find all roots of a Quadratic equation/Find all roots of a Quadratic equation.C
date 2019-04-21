/* C program to find all roots of a quadratic equation */
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float root1,root2,i;
    float d;
    printf("Enter values of a,b,c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f",&a,&b,&c);
    /* Find discriminant of the equation */
    d=(b*b)-(4*a*c);
    /* Find the nature of discriminant */
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Two distinct and real roots exists: %.2f and %.2f",root1,root2);
    }
    else if(d==0)
    {
        root1=root2=-b/(2*a);
        printf("Two equal and real roots exists: %.2f and %.2f",root1,root2);
    }
    else if(d<0)
    {
        root1=root2=-b/(2*a);
        i=sqrt(-d)/(2*a);
        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", root1,i,root2,i);
    }
    return 0;
}
