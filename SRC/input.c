/* input.c*/
#include <stdio.h>
#include "input.h"
#include "quad.h"

double getInput()
{
	double a, b, c, det;
  	printf("Enter coefficients a, b and c: (pressing enter after each coefficient)");
  	scanf("%lf%lf%lf",&a,&b,&c);
	det = quad(a,b,c);
	return 0.0;
}
