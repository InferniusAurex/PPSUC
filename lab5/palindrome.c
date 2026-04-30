// Program to check whether a number is palindrome or not
#include<stdio.h>
int main()
{
int n, r, t, rev = 0;
scanf("%d", &n);
t = n;
printf("The given number = %d", n);
while(n > 0)
{
r = n % 10;
rev = rev * 10 + r;
n = n / 10;
}
printf("\nThe reverse value = %d", rev);
if(t == rev)
{
printf("\n%d is a palindrome", t);
}
else
{
printf("\n%d is not a palindrome", t);
}
return 0;
}
