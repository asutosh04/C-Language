#include<stdio.h>


void main()
{
    int a=0;
    if(a<1)
        printf("XXX");
    printf("\nYYY\n");

    if(a>1)
        printf("\n000");
    printf("\n1111\n");


    if(1)
        printf("\nKiit");
    printf("\nUniversity\n");

    if(a)
        printf("\nKiit");
    printf("\nUniversity\n");


    if(a=1)
        printf("\nComp Sc.");
    printf("\nEngineering\n");

    int b;
    if(b=a++)
        printf("\nComp Sc.");
    printf("\nEngineering\n");
    
    if(b=++a)
        printf("\nComp Sc.");
    printf("\nEngineering\n");

}