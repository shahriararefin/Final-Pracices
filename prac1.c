#include<stdio.h>
#include <stdlib.h>



int main(){

    int i,n;
    char arr[5];
    
    printf("Insert 3 elements of an array: ");
  
    for(i=0;i<3;i++){
        scanf("%s", &arr[i]);

    }
    
    printf("Array: ");
     for(i=0;i<3;i++){
    printf(" %c ", arr[i]);

    }
    


    return 0;
}
