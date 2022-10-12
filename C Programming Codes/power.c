#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,res;
    printf("Please enter the value of a:\n");
    scanf("%d",&a);
    printf("Please enter the value of b:\n");
    scanf("%d",&b);
    res=pow(a,b);
    printf("The result is:%d",res);
}