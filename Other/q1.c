#include<stdio.h>
#include<conio.h>
#include<math.h>
float area(float);
float perimeter(float);
int main()
{
    float r;
    printf("Enter radius ");
    scanf("%f",&r);
    printf("Area = %f",area(r));
    printf("\nPerimeter = %f",perimeter(r));
}
float area(float r)
{
    return (3.14*r*r);
}
float perimeter(float r)
{
    return (2*3.14*r);
}