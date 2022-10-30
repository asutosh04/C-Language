#include <stdio.h>

int main()
{
    float gs,bs;
    printf("Enter the basic salary:$");
    scanf("%f",&bs);
    if(bs<1500)
        gs=bs+bs*10/100+bs*40/100;
    else
        gs=bs+500+bs*50/100;
    printf("Gross Salary is :$%f",gs);
    return 0;
}