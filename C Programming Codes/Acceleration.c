#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of acceleration:");
    scanf("%d",&a);
    if(a==0)
    {
    printf("The vehicle moves with constant acceleration");
    }
    else if(a>0)
    {
    printf("The vehicle moves with accelerated velocity");
    }
    else
    {
    printf("The vehicle moves with deccelerated velocity");
    }
    return (0);
}