#include<stdio.h>
int main(){

    int arr[6]={3,5,6,8,9};
     int i,s_value;
     int countL=0;
  
    printf("Enter Value: ");
    scanf("%d", &s_value);

    
    for( i=0;i<arr[i]; i++){
       countL++;
        if (s_value==arr[i]) {
            
            int pos=i+1;

            printf("%d\n", pos);
            break;
        }
        
        
        
    }
    
    if (s_value!=arr[i])  {
            printf("Not Found\n");
        
        }

        printf("%d", countL);

    return 0 ;

    }
    