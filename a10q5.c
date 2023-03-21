//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
int oddnatural(int n);
int main()
{
    int n;
    printf("enter number of terms:");
    scanf("%d",&n);
    oddnatural(n);
    return 0;
}
int oddnatural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
         printf("%d",2*i-1);
         printf("\n");
    }

}

