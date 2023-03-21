//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(float r);
int main()
{
    float r,ar=0.0;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    ar=area(r);
    printf("Area of circle is %f",ar);
    return 0;

}
float area(float r)
{
    return (3.14*r*r);
}
