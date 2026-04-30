#include<stdio.h>
int main()
{
char ch;
char str[50];
char sentence[100];
scanf("%c", &ch);
scanf("%s", str);
scanf(" %[^\n]", sentence);
printf("%c\n", ch);
printf("%s\n", str);
printf("%s", sentence);
return 0;
}
