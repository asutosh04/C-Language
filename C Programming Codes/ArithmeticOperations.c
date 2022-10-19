#include <stdio.h>

int main()
{
    int p, q, choice;

    printf("Enter any two positive integer numbers:\n");
    scanf("%d%d", &p, &q);

    printf("\nInput your choice to make an operation\n");
    printf("\n1 :: for Addition");
    printf("\n2 :: for Substraction");
    printf("\n3 :: for Multiplication");
    printf("\n4 :: for Division");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);
    
    printf("\n");
    if (choice == 1) {
        printf("Addition of %d + %d = %d\n", p, q, p + q);
    } else if (choice == 2) {
        printf("Substraction of %d - %d = %d\n", p, q, p - q);
    } else if (choice == 3) {
        printf("Multiplication of %d * %d = %d\n", p, q, p * q);
    } else if (choice == 4) {
        printf("Division of %d / %d = %f\n", p, q, (float)p / q);
    } else {
        printf("\nKindly input correct choice!\n");
    }

    return 0;
}