#include <stdio.h>

int main()
{
    int numberOne,numberTwo;
    float floatOne,floatTwo;
    
    printf("Enter integer One: ");
    scanf("%d", &numberOne);

    printf("Enter integer Two: ");
    scanf("%d", &numberTwo);


    printf("Enter float One: ");
    scanf("%f", &floatOne);

    printf("Enter float Two: ");
    scanf("%f", &floatTwo);
    
    printf("\n");
    printf("Result:\n");
    printf("sum of int= %d\n", numberOne+numberTwo);
    printf("diff of int= %d\n", numberOne-numberTwo);
    printf("sum of float= %.2f\n", floatOne+floatTwo);
    printf("diff of float= %.2f\n", floatOne-floatTwo);
   
    return 0;

}