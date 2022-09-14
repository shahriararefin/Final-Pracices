#include<stdio.h>

    void calculatePrice(float value);

int main(){

    float value = 1240.00;
    calculatePrice(value);

    return 0;
}

void calculatePrice(float value){
    value= value+ (value*0.15);
    printf("Final Price: %.2f", value);
}