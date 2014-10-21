#include <stdio.h>
#include "quad.h"

double r1, r2;
bool imagFlag;

int main()
{

  	double a = 3.0, b = 4.0, c = 1.0;
	quad(a, b, c, &imagFlag, &r1, &r2);
	printf("Coefficients are: %f, %f, and %f \n", a, b, c);
	if (imagFlag == false)
	printf("Roots are: %.2lf and %.2lf \n",r1 , r2);
	else
	printf("This quadratic features 2 imaginary roots! \n");

	return 0;
  	
}
