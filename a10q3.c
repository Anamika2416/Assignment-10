//Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int check(int);
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    i=check(n);
    if(i==1)
        printf("%d is even",n);
    else
        printf("%d is odd",n);
    return 0;
}
int check(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
