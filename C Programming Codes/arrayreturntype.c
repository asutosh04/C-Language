#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * fun(int n){
    int *p;
    p=(int*)malloc(n*sizeof(int));
    return (p);
}
int main(){
    int *A,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    A=fun(n);
    for (int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d",A[i]);
    }
    return 0;
}