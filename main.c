#include <stdio.h>
#include "myMath.h"

int main()
{

printf("enter a number");

double x;
scanf("%lf",&x);

double func1= sub(add((Exp((int)x)),(pow_(x,3))),2);
double func2= add((mul(x,3)),(mul(pow_(x,2),2)));
double func3= sub((div_((mul(pow_(x,3),4)),5)),(mul(x,2)));

printf("the value of F(x)= (e^x+x^3-2) At The point %lf is: %0.4lf\n", x,func1);
printf("the value of F(x)= (3x+2x^2) At The point %lf is: %0.4lf\n" ,x,func2);
printf("the value of F(x)= (4x^3/5-2x) At The point %lf is: %0.4lf\n", x,func3);
return 0;
}
