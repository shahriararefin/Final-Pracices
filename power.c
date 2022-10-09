#include<stdio.h>
#include<math.h>
int main(){

    double n;
    printf("Enter a value: ");
    scanf("%lf",&n);

    printf("%.2f", pow(n,2));

    return 0;
}