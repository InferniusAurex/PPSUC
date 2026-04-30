#include<stdio.h>
int main()
{
int custno;
float units,charges;
printf("Enter Customer no:");
scanf("%d",&custno);
printf("Enter no.of units consumed:");
scanf("%f",&units);
if(units>=0 && units<=200)
{
charges=0.5*units;
}
else if(units>=201 && units<=400)
{
charges=100+(units-200)*0.65;
}
else if(units>=401 && units<=600)
{
charges=230+(units-400)*0.80;
}
else
{
charges=390+(units-600)*1.5;
}
printf("Amount to be paid is %f",charges);
return 0;
}
