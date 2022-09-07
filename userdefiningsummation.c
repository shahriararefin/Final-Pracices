#include<stdio.h>

    int add(int a, int b){
        int c=a+b;
        return c;
    }
    int sub(int a, int b){
        int c=a-b;
        return c;
    }
    int mul(int a, int b){
        int c=a*b;
        return c;
    }
    int div(int a, int b){
        int c=a/b;
        return c;
    }

int main(){

    int addition=add(10,20);
    int subtraction=sub(20,5);
    int multiplication=mul(4,5);
    int division=div(21,7);

    printf("Additon= %d\n", addition);
    printf("Subtraction= %d\n", subtraction);
    printf("Multiplication= %d\n", multiplication);
    printf("Division= %d\n", division);

    return 0;
}