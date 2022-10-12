#include <stdio.h>

int main()
{
    float x1,x2,x3,x4,y1,y2,y3,y4,m1,m2,t;
    printf("\nEnter the one point of first line x1 and y1:");
    scanf("%f %f",&x1, &y1);
    printf("\nEnter the second of first line point x2 and y2:");
    scanf("%f %f",&x2, &y2);
    printf("\nEnter the one point of second line x1 and y1:");
    scanf("%f %f",&x3, &y3);
    printf("\nEnter the second point of second line x2 and y2:");
    scanf("%f %f",&x4, &y4);
    m1=(y2-y1)/(x2-x1);
    m2=(y4-y3)/(x4-x3);
    printf("\nThe slpoe of the first line is %f",m1);
    printf("\nThe slpoe of the second line is %f",m2);
    t=(m1==m2);
    printf("\nWhether the lines are parallel or not?");
    printf("0 for NO,1 for YES:%f",t);
    return 0;
}
