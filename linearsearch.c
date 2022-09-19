#include<stdio.h>
int main(){

    int arr[6]={3,5,6,8,9,1};
     int s_value;
    printf("Enter Value: ");
    scanf("%d", &s_value);

    int countL=0;
    for(int i=0;i<=arr[i]; i++){
       countL++;
        if (s_value==arr[i]) {
            int pos=i+1;
            printf("%d", pos);
            break;
            
        }
        else if (i==6)
        {
            printf("Not Found");
        }
       
    }
        return 0;
   
}