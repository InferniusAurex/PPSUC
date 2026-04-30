#include <stdio.h>

int main()
{
    int divisor, divident;
    printf("enter your divisor: ");
    scanf("%d", &divisor);

    printf("enter your divident: ");
    scanf("%d", &divident);

    printf("Quotient: %d", divident/divisor);
        printf("remainder: %d", divident%divisor);
    return 0;
}