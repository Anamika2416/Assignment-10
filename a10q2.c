//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float interest(float p,float r,float t);
int main()
{
    float p,r,t,si=0.0;
    printf("Enter principal,rate of interest,and time:");
    scanf("%f %f %f",&p,&r,&t);
    si=interest(p,r,t);
    printf("Simple Interest is %f",si);
    return 0;

}
float interest(float p,float r,float t)
{
    return ((p*r*t)/100);
}
