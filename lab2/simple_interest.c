// Simple interest
#include<stdio.h>
int main()
{
float P, R, T, SI;
scanf("%f", &P);
scanf("%f", &R);
scanf("%f", &T);
SI = (P * R * T) / 100;
printf("%.2f", SI);
return 0;
}
