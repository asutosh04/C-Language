#include <stdio.h>
int main()
{
    char lowerChar, upperChar;
    int ascii;
    printf("Enter a lowercase Character: ");
    scanf("%c", &lowerChar);
    ascii = lowerChar;
    printf("It's Ascii is:%d",ascii);
    upperChar = ascii - 32;
    printf("\nIts Uppercase is:%c",upperChar);
    return 0;
}