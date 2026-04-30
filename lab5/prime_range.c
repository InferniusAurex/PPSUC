// Prime numbers between a given range
#include<stdio.h>
int main()
{
int start, end, i, j, count;
scanf("%d%d", &start, &end);
printf("Prime numbers between %d and %d are:\n", start, end);
for(i = start; i <= end; i++)
{
count = 0;
for(j = 1; j <= i; j++)
{
if(i % j == 0)
{
count++;
}
}
if(count == 2)
{
printf("%d\n", i);
}
}
return 0;
}
