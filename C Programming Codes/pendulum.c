#include<stdio.h>
#define pi 3.14
#define g 9.8
#include<math.h>
void main()
{
    int l=10;
    float T;
    printf("l is %d\n",l);
    T=2*pi*pow((l/g),0.5);
    printf("%f\n",T);
    l=l+10;
    
    printf("new l is %d\n",l);
    T=2*pi*pow((l/g),0.5);
    printf("%f\n",T);
    l=l+10;
    
    
    printf("new l is %d\n",l);
    T=2*pi*pow((l/g),0.5);
    printf("%f\n",T);
    l=l+10;
    
    printf("new l is %d\n",l);
    T=2*pi*pow((l/g),0.5);
    printf("%f\n",T);
    l=l+10;

    printf("new l is %d\n",l);
    T=2*pi*pow((l/g),0.5);
    printf("%f\n",T);
    l=l+10;
}