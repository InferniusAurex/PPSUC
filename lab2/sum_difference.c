#include<stdio.h>
int main()
{
int a, b;
float x, y;
scanf("%d %d", &a, &b);
scanf("%f %f", &x, &y);
printf("Integer Sum = %d\n", a + b);
printf("Integer Difference = %d\n", a - b);
printf("Float Sum = %.2f\n", x + y);
printf("Float Difference = %.2f\n", x - y);
return 0;
}
