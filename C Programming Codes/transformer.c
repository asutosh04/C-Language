#include <stdio.h>

int main()
{
    int pt,st,pv,sv;
    printf("Enter the primary voltage:");
    scanf("%d",&pv);
    printf("\n Enter the primary turns:");
    scanf("%d",&pt);
    printf("\n Enter the secondary turns:");
    scanf("%d",&st);
    sv=(pv*st)/pt;
    printf("\n Secondary voltage is %d volts",sv);
    return 0;
}
