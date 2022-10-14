#include<stdio.h>


void main()
{
    int a,b,c,d,e;
    printf("Enter 5 numbers:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int max=a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    if(max<d)
        max=d;
    if(max<e)
        max=e;
    
    printf("max is %d",max);

}