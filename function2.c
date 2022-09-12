#include<stdio.h>

    void hello();
    void bonjour();

int main(){

    printf("Enter 'a' if American or enter 'f' if french: ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'a'){
        hello();
    }
    else if(ch == 'f'){
        bonjour();
    }

    else
        printf("Wrong Input");

    return 0;
}

 void hello(){
    printf("Hello!");
 }

 void bonjour(){
    printf("Bonjour");
 }