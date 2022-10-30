#include <stdio.h>

int main()
{
    float x1,x2,x3,y1,y2,y3,m1,m2,m3;
    printf("Enter the first point x1 and y1:");
    scanf("%f %f",&x1, &y1);
    printf("\nEnter the second point x2 and y2:");
    scanf("%f %f",&x2, &y2);
    printf("\nEnter the third point x3 and y3:");
    scanf("%f %f",&x3, &y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    m3=(y1-y3)/(x1-x3);
    printf("\nThe slopes of 3 lines are %f %f %f",m1,m2,m3);
    if(m1!=m2 && m2!=m3 && m3!=m1)
        printf("\nThe given points form a triangle");
    else
        printf("\nThe given points do not form a triangle");
    return 0;
}