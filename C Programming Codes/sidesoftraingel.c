#include <stdio.h>

int main()
{
    int a,b,c,t;
    printf("Enter the first side:");
    scanf("%d",&a);
    printf("Enter the second side:");
    scanf("%d",&b);
    printf("Enter the third side:");
    scanf("%d",&c);
    t=((a+b)>c)&&((b+c>a))&&((c+a>b));
    printf("\nDo they satisfy triangle property? 1 for YES, 0 for NO:%d",t);
    return 0;
}