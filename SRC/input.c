/* input.c*/
/* follows GNU Coding Standards*/

#include <stdio.h>
#include "input.h"
#include "quad.h"

void getInput(double *a, double *b, double *c)
{
	double det;
  	printf("Enter coefficients a, b and c: ");
  	scanf("%lf%lf%lf",&*a,&*b,&*c);
}
