#include <stdio.h>

int main()
{
    char name[50];
    printf("who are you? : ");
    scanf("%s",name);
    printf("hello %s\n", name);
    return 0;
}

// NOTES
/*  Numbers → single variable → use &
 *    Strings → many characters → need array  */
