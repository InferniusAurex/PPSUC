#include<stdio.h>
int main()
{
float speed, time, distance;
scanf("%f", &speed);
scanf("%f", &time);
distance = speed * time;
printf("%.2f", distance);
return 0;
}
