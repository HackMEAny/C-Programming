/* Convert binary to decimal & vice versa */
#include <stdio.h>
#include <math.h>
int binary_decimal(int n);
int decimal_binary(int n);
int main()
{
   int n,c;
   printf("Instructions:\nPress 1 to convert binary to decimal.\nPress 2 to convert decimal to binary.\n");
   scanf("%d",&c);
   if (c==1)
   {
       printf("Enter a binary number: ");
       scanf("%d",&n);
       printf("%d in binary = %d in decimal",n,binary_decimal(n));
   }
   if (c==2)
   {
       printf("Enter a decimal number: ");
       scanf("%d",&n);
       printf("%d in decimal = %d in binary",n,decimal_binary(n));
   }
   return 0;
}
int decimal_binary(int n)  /* Function to convert decimal to binary.*/
{
    int rem,i=1,b=0;
    while(n!=0)
    {
        rem=n%2;
        n/=2;
        b+=rem*i;
        i*=10;
    }
    return b;
}
int binary_decimal(int n) /* Function to convert binary to decimal.*/
{
    int d=0,i=0,rem;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        d+=rem*pow(2,i);
        ++i;
    }
    return d;
}
