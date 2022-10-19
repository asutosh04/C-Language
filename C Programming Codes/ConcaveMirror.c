#include <stdio.h>

int main()
{
    int po;
    printf("Press 1, if the object is at infinity:\n");
    printf("Press 2, if the object is beyond the center of the curvecture:\n");
    printf("Press 3, if the object is at the center of the curvecture:\n");
    printf("Press 4, if the object is between C and F:\n");
    printf("Press 5, if the object is at focus F:\nEnter Your Choice:");
    scanf("%d", &po);
    if (po == 1)
    {
        printf("The position of the object is at infinity\n");
        printf("Position of the image is at the focus F\n");
        printf("Size of the image is highly dimished\n");
        printf("Nature of the image is real and inverted\n");
    }
    else if (po == 2)
    {
        printf("The position of the object is beyond the center of curvecture C\n");
        printf("Position of the image is between F and C\n");
        printf("Size of the image is dimished\n");
        printf("Nature of the image is real and inverted\n");
    }
    else if (po == 3)
    {
        printf("The position of the object is at the center of curvecture C\n");
        printf("Position of the image is at C\n");
        printf("Size of the image is as the object\n");
        printf("Nature of the image is real and inverted\n");
    }
    else if (po == 4)
    {
        printf("The position of the object is between C and F\n");
        printf("Position of the image is beyond C\n");
        printf("Size of the image is enlarged\n");
        printf("Nature of the image is real and inverted\n");
    }
    else if (po == 5)
    {
        printf("The position of the object is at focus F\n");
        printf("Position of the image is at infinity\n");
        printf("Size of the image is highly enlarged\n");
        printf("Nature of the image is real and inverted\n");
    }
    else
    {
        printf("Enter the correct order for the program to run and try again\n");
    }

    return 0;
}