#include<stdio.h>
int main()
{
int a, b, c, d, result;
scanf("%d %d %d %d", &a, &b, &c, &d);
result = a / b * c - b + a * d / 3;
printf("%d", result);
return 0;
}
