#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,r1,r2,d;
printf("Enter a,b,c Values:");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if(d==0)
{
printf("roots are real & Equal \n");
r1=-b/(2*a);
r2=-b/(2*a);
printf("root1=%f\n",r1);
printf("root2=%f\n",r2);
}
else if(d>0)
{
printf("roots are real & different \n");
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("root1=%f\n",r1);
printf("root2=%f\n",r2);
}
else
{
printf("roots are imaginary\n");
}
return 0;
}
