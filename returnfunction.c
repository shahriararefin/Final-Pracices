#include<stdio.h>

    int sum(int a, int b);
    int table(int n);

int main(){
    
    int n,a,b;

    sum(a=10,b=5);
    table(n=6);
    

}

int sum(int a, int b){
    printf("%d\n", a+b);
    
}

int table(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n", n*i);
    }
    
}
