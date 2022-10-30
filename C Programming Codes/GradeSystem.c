#include<stdio.h>
int main()
{
    int p, c, m, b, e;
    float per;
    printf("Enter the marks in five subjects out of 100:\n ");
    scanf("%d %d %d %d %d", &p, &c, &m, &b, &e);
    per= (int)(p+c+m+b+e+4.9)/5;
    printf("Percentage is %f",per);
    if (per>=60)
    printf("\nFirst Division");
    if ((per>=50) && (per<60))
    printf("\nSecond Division");
    if((per>=40) && (per<50))
    printf("\nThird Division");
    if(per<40)
    printf("\nFail");
    
    return 0;
}