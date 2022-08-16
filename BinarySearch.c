#include<stdio.h>
int main(){


    int i,n;
    int arr[21]={8,10,11,12,13,14,15,16,17,19,20,21,22,24,25,26,27,29,30,32,34,35};

    printf("Enter a value to search from the given array: ");
    scanf("%d", &n);
    for(i=0;i<=arr[i];i++){
        if(n=arr[i]){
            printf("%d", arr[i]);
        }
    }

    return 0;

}