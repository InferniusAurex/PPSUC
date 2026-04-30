#include <stdio.h>
#include <math.h>


int main()
{
float num;
printf("please enter your number: ");
scanf(" %f", &num);
float ansNum = sqrtf(num);
printf("square root: %.2f", ansNum);
return 0;
}


// in compiler use "-lm" flag for gcc
