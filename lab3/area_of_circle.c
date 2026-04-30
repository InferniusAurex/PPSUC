#include<stdio.h>
#define PI 3.14
int main()
{
float radius;
scanf("%f", &radius);
float area = PI * radius * radius;
printf("Area of Circle = %.2f\n", area);
return 0;
}
