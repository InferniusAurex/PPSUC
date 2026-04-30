#include <stdio.h>

int main()
{
    // Variable declaration
    int myNumber;
    float myFraction;
    char myLetter; 
    char myName[30];
    char mySentence[100];

    // Input to user
    //INTEGER
    printf("Enter an integer: ");
    scanf("%d", &myNumber);
    // FRACTION
    printf("Enter a fraction: ");
    scanf("%f", &myFraction);
    // LETTER
    printf("Enter a Letter: ");
    scanf(" %c", &myLetter); // Saves just a letter
    // WORD
    printf("Enter a name: "); 
    scanf("%29s", myName);     // Saves just a word
    // SENTENCE
    printf("Enter a sentence: ");
    scanf(" %99[^\n]", mySentence);  // Saves just a sentence

    // Output
    printf("\n");
    printf("------\n");
    printf("Your Number is: %d\n", myNumber);
    printf("Your Fraction is: %.2f\n", myFraction);
    printf("Your Letter is: %c\n", myLetter);
    printf("Your Name is: %s\n", myName);
    printf("Your Sentence is: %s\n", mySentence);
    return 0;
}