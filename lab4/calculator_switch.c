// Arithmetic operators using switch case
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a,b Values:");
scanf("%d%d",&a,&b);
printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo Division");
printf("\n\n\t Enter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:
printf("The Addition of %d and %d is:%d",a,b,a+b);
break;
case 2:
printf("The Subtraction of %d and %d is:%d",a,b,a-b);
break;
case 3:
printf("The Multiplication of %d and %d is:%d",a,b,a*b);
break;
case 4:
printf("The division of %d and %d is:%d",a,b,a/b);
break;
case 5:
printf("The Modulodivision of %d and %d is:%d",a,b,a%b);
break;
default:
printf("\n enter data properly");
break;
}
return 0;
}
