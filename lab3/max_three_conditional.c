// Using ternary operator or conditional operator
// Biggest of Three numbers
#include<stdio.h>
int main()
{
int a, b, c, total;
scanf("%d %d %d", &a, &b, &c);
total = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
printf("The Biggest Value=%d", total);
return 0;
}
