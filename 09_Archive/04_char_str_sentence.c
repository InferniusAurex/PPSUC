#include <stdio.h>

int main()
{
    char myCharacter, myStringword[30], myStringSentence[100];


    // INPUT
    printf("Enter letter: ");
        scanf(" %c", &myCharacter);

    printf("Enter word: ");
        scanf(" %29s", myStringword);

    printf("Enter sentence: ");
        scanf(" %99[^\n]", myStringSentence);

    //OUTPUT
    printf("Letter: %c\n", myCharacter);
        printf("Word: %s\n", myStringword);
            printf("Sentence: %s\n", myStringSentence);


        return 0;
}