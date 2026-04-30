#include <stdio.h>

int main()
{
    int loops, i;

    printf("How many times should I print meow? ");
    scanf("%d", &loops);

    i = 0;
    while (i < loops)
    {
        printf("meow\n");
        i++;
    }
    return 0;
}
