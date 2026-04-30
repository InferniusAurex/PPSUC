#include <stdio.h>

int main()
{
    char response;
    printf("Do you agree?(y,n): ");
    scanf(" %c", &response);

    if (response=='y'||response=='Y')
    {
        printf("Agreed!");
    }
    else
    {
        printf("not agreed");
    }
}