//Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>
int factorial(int n);
int main()
{
    int n,r,per=0;
    printf("enter value of n and r:");
    scanf("%d %d",&n,&r);
    per=factorial(n)/(factorial(n-r));
    printf("Number of arrangements one can make from %d items and %d selected at a time %d",n,r,per);
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
