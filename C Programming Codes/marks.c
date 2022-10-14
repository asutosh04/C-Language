#include <stdio.h>

int main()
{
int marks,age;
printf("Enter Marks");
scanf("%d",&marks);
printf("\nEnter Age");
scanf("%d",&age);
marks=marks+40;
if(age<50)
    marks=marks+20;
printf("Marks=%d",marks);  
}
