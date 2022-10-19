#include<stdio.h>


void main()
{
    int c=0,i=1,p,ch,m,e;
    repeat:
    printf("Enter all marks(phy,chem,maths,eng) of student %d: \n",i);
    scanf("%d %d %d %d",&p,&ch,&m,&e);
    
    if(p>0 && ch>0 && m>0 && e>0)
    {   
        if(p>60 && ch>60 && m>60 && e>60)
        {
            c++;
        }
        
    }
    else
    {
        printf("You entered a wrong marks!Please enter again.");
        goto repeat;
    }
    i++;

    if(i<=10)
    {
        goto repeat;
    }

    printf("%d students scored more than 60 in each subjects",c);

}