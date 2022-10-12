#include<stdio.h>


void main()
{
    int a,b,c,t;
    printf("Enter the sides of the triangle:");
    scanf("%d %d %d",&a,&b,&c);
    t=(c*c==a*a+b*b || b*b==a*a+c*c || a*a==b*b+c*c);
    printf("\nThis is a right angled triangle or not?");
    printf("\n0 for NO, 1 for Yes:%d",t);
}