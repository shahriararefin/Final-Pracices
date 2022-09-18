#include<stdio.h>
int main(){

    int p,i,n;

    printf("Enter two integer value for p and n \n");
    printf("Here P must be smaller than n: ");
    scanf("%d %d", &p, &n);
    
    printf("Odd Numbers: \n");
       for(i=p;i<=n;i++){

        if(i%2!=0){
        printf("%d\n", i);
        }
       }
 
    return 0;
}

