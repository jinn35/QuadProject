#include <stdio.h>
#include "test_driver.h"
#include "../Quad/quad.h"
#include <assert.h>

//grabs input from user via keyboard

double a, b, c, r1, r2;
bool imagFlag;
void getInput(double *a, double *b, double *c)
{
	double x,y,z;
	x = 1;
	y = 4;
	z = 3;
	*a=x;
	*b=y;
	*c=z;
}
