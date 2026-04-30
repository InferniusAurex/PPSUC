#include <stdio.h>
int main()
{
int num;
float f;
char ch;
char str[100];
// Reading input
scanf("%d", &num);
scanf("%f", &f);
scanf(" %c", &ch); // space before %c to avoid newline issue
scanf("%s", str);
// Printing output
printf("Integer: %d\n", num);
printf("Float: %.2f\n", f);
printf("Character: %c\n", ch);
printf("String: %s\n", str);
return 0;
}
