#include <stdio.h>

int main()
{
    float P,Q,R,S;
    printf("Enter the value of P:");
    scanf("%f",&P);
    printf("Enter the value of Q:");
    scanf("%f",&Q);
    printf("Enter the value of R:");
    scanf("%f",&R);
    printf("Enter the value of S:");
    scanf("%f",&S);
    if(P*S==R*Q)
        {
        printf("\nThe wheatstone bridge is balanced");
        return(0);
        }
    printf("\nThe wheatstone bridge is not balanced");
    S=R*Q/P;
    printf("\nChoose S=%f to balance the wheatstone bridge",S);
    return 0;
}