#include <stdio.h>

int main()
{
    float x1,x2,y1,y2,slope;
    printf("Enter the one point x1 and y1:");
    scanf("%f %f",&x1, &y1);
    printf("Enter the second point x2 and y2:");
    scanf("%f %f",&x2, &y2);
    slope=(y2-y1)/(x2-x1);
    printf("The slpoe of the given line is %f",slope);
    return 0;
}
