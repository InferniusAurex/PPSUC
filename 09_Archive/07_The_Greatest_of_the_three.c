#include <stdio.h>

int main()
{
    int x,y,z;

    printf("Enter x: ");
     scanf(" %d", &x);

    printf("Enter y: ");
     scanf(" %d", &y);

    printf("Enter z: ");
     scanf(" %d", &z);




    if (x < y)
    {
      if (y<z)
      {
        printf("%d is the biggest", z);
      }
      else
      {
        printf("%d is the biggest", y);
      }
    }
    else
    {
        if (x<z)
        {
            printf("%d is the biggest", z);
        }
        else
        printf("%d is the biggest", x);
    }


    return 0;
}