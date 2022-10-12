#include <stdio.h>

int main()
{
    int a,b,c,t,s;
    printf("Enter the first side:");
    scanf("%d",&a);
    printf("Enter the second side:");
    scanf("%d",&b);
    printf("Enter the third side:");
    scanf("%d",&c);
    t=((a+b)>c)&&((b+c>a))&&((c+a>b));
    s=t*(a+b+c);
    printf("\nDo they satisfy triangle property?");
    printf("\nDisplay 0 for NO, Sum of all sides for YES:%d",s);
    return 0;
}