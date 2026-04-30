#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter x: ");
     scanf(" %d", &x);

    printf("Enter y: ");
     scanf(" %d", &y);




    if (x < y){
        printf("x is lessthan y");
    }

    else if (x > y){
        printf("x is Greater than y");
    }

    else {
        printf("x is Equals y");
    }



    return 0;
}