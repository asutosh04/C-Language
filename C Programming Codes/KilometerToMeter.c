#include <stdio.h>
#include <stdlib.h>
int main()
{
float dist,m;
printf("Enter the distance between 2 places in Kilometers:");
scanf("%f",&dist);
m=dist*1000;
printf("\nThe distance in meter is %f Meters",m);
return 0;
}
