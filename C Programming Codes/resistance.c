#include <stdio.h>
int main()
{
    float r1,r2,r3,rp,v,ip,is,rs,x;
    printf("Enter the resistances:");
    scanf("%f %f %f",&r1,&r2,&r3);
    rs=r1+r2+r3;
    x=(1/r1)+(1/r2)+(1/r3);
    rp=1/x;
    printf("\nEnter the volatage:");
    scanf("%f",&v);
    ip=v/rs;
    is=v/rp;
    printf("\nCurrent in series is %f",is);
    printf("\nCurrent in parallel is %f",ip);
    return 0;
}