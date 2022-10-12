#include <stdio.h>
#define g 9.8
int main()
{
    int u,t=0;
    float v,s;
    printf("Give the initial velocity:");
    scanf("%d",&u);
    t++;
    v=u+g*t;
    s=u*t+g*t*t/2;
    printf("\nVelocity=%f m/s and Distance covered=%f m after %d s",v,s,t);
    t++;
    v=u+g*t;
    s=u*t+g*t*t/2;
    printf("\nVelocity=%f m/s and Distance covered=%f m after %d s",v,s,t);
    t++;
    v=u+g*t;
    s=u*t+g*t*t/2;
    printf("\nVelocity=%f m/s and Distance covered=%f m after %d s",v,s,t);
    t++;
    v=u+g*t;
    s=u*t+g*t*t/2;
    printf("\nVelocity=%f m/s and Distance covered=%f m after %d s",v,s,t);
    t++;
    v=u+g*t;
    s=u*t+g*t*t/2;
    printf("\nVelocity=%f m/s and Distance covered=%f m after %d s",v,s,t);
    return 0;
}