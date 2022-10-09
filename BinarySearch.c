#include <stdio.h>
int main()
{
  int i, minimum, maximum, middle, n, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  minimum = 0;
  maximum = n - 1;
  middle = (minimum+maximum)/2;

  while (minimum <= maximum) {
    if (array[middle] < search)
      minimum = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      maximum = middle - 1;

    middle = (minimum + maximum)/2;
  }
  if (minimum > maximum)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}
















/*
#include<stdio.h>
int main(){


  int i,j,tmp;
  int arr[10]={33,21,13,54,46,38,19,42,55};

  for ( i = 0; i < arr[i]; i++){
    for (j = i+1; j < arr[i]; j++)
    {
        if (arr[j]<arr[i])
        {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }
  
  }

  printf("Sorted Array: ");
  for ( i=0; i<arr[i]; i++)
  {
    printf("%d\t", arr[i]);
  }
  
  

    return 0;

}
*/