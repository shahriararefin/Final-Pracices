/*
#include<stdio.h>
int sum (int num)
{
    if (num)
        return (num+sum(num-1));
    else
        return 0;
}
int main()
{
//int range=10;
int range;
printf("Enter the range you want to print: ");
scanf("%d", &range);
printf("Sum of 1st %d number (1+2+3+4+5+6+7+8+9+10) is = %d\n",range,sum(range));
return 0;
}
*/

#include<stdio.h>
int sum (int n)
{
    if (n==0)
        return 0;
    else
        return n+sum(n-1);
}
int main()
{
int result = sum (10);
printf("%d", result);
}