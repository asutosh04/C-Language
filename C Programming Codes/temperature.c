#include <stdio.h>
int main()
{
    float fr,cg;
    printf("\nEnter the temperature in Fahrenheit:");
    scanf("%f",&fr);
    cg=5.0/9.0*(fr-32);
    printf("\nTemperature in cenrigrade is:%f",cg);
}