/* output.c*/
/*follows GNU Coding Standards*/

#include <stdio.h>
#include "output.h"

int out1(double r1, double r2)
{
	printf("Roots are: %.2lf and %.2lf \n",r1 , r2);
	return 0;
}

int out3(double real, double imag)
{
	printf("This quadratic features 2 imaginary roots! \n");
	//Roots are: %.2lf+%.2lfi and %.2lf-%.2lfi \n", real, imag, real, imag);
	return 0;
}
