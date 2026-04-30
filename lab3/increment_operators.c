#include<stdio.h>
int main()
{
int i, j, x, y;
scanf("%d", &i);
x = i++;
y = ++i;
j = x + y;
printf("i = %d\n", i);
printf("j = %d", j);
return 0;
}
