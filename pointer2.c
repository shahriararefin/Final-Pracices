#include<stdio.h>
/*
    void printaddress(int n);
int main(){

    int n=4;
    printaddress(n);
    printf("N is: %u\n", &n);
    return 0;
}

void printaddress(int n){

    printf("N is: %u\n", &n);
}
*/

void doWork(int a,int b,int *sum,int *prod,int *avg);

int main(){
    int a=3,b=5;
    int sum,prod,avg;
    doWork(a,b,&sum,&prod,&avg);
    printf("sum= %d, prod= %d, avg= %d", sum,prod,avg);

    return 0;
}

void doWork(int a,int b,int *sum,int *prod,int *avg){
    *sum= a+b;
    *prod= a*b;
    *avg= (a+b)/2;
}