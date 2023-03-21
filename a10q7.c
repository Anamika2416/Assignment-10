//Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int factorial(int n);
int main()
{
    int n,r,comb=0;
    printf("enter value of n and r:");
    scanf("%d %d",&n,&r);
    comb=factorial(n)/(factorial(n-r)*factorial(r));
    printf("Combinations one can make from %d items and %d selected at a time is %d",n,r,comb);
    return 0;
}
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;

}
