//Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int check(int,int);
int main()
{
   int r,n,s;
   printf("Enter the number and digit to be found:");
   scanf("%d %d",&n,&r);
   s=check(n,r);
   if(s==1)
    printf("%d is present in %d.",r,n);
   else
     printf("%d is present in %d.",r,n);
   return 0;
}
int check(int n,int r)
{
    int s=0,rem;
    for(;n>0;)
    {
        rem=n%10;
        n=n/10;
        if(rem==r)
            s++;
    }
    return s;
}
