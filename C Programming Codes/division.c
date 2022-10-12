#include <stdio.h>

int main()
{
    int a,b,Q,R;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    Q=a/b;
    printf("\nThe Quotient is %d",Q);
    R=a%b;
    printf("\nThe remainder is %d",R);
    return 0;
}