#include <stdio.h>

int main()
{
    char username;
    int password;
    printf("Username:");
    scanf("%c",&username);
    printf("\nPassword:");
    scanf("%d",&password);
    if(username=='a')
    {
        if(password==12345)
            printf("Login Successful");
        else
            printf("Password is incorrect,Try Again.");
    }
    else
    {
        printf("Username is incorrect,Try Again.");
    }
    return 0;
}