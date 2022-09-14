#include<stdio.h>

    int factorial(int n);
int main(){

    printf("%d",factorial(5));

    return 0;
}

int factorial(int n){
    //condition
    if(n==1){
        return 1;
    }
    int fNm1= factorial(n-1); //factorial 1 to n // fNm1= factorial n minus 1
    int fN= fNm1*n;
    return fN;
}