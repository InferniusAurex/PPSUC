#include <stdio.h>
int main()
{
int English, Maths, Science, Psychology, History;
int total;
float average;
scanf("%d %d %d %d %d", &English, &Maths, &Science, &Psychology, &History);
total = English + Maths + Science + Psychology + History;
average = total / 5.0;
printf("%d\n", total);
printf("%.2f", average);
return 0;
}
