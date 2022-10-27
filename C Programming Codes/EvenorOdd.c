#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num % 2 == 0)
        printf("%d is the even number",num);
    else
        printf("%d is the odd number",num);
    return 0;
}