//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of terms:");
    scanf("%d",&n);
    natural(n);
    return 0;
}
int natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
         printf("%d",i);
         printf("\n");
    }

}
