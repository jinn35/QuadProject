/* output.c*/
/*follows GNU Coding Standards*/

#include <stdio.h>
#include "output.h"

double r1, r2;
bool imagFlag;

void printRoots(double r1, double r2, bool imagFlag)
{
	if (imagFlag == false)
	printf("Roots are: %.2lf and %.2lf \n",r1 , r2);
	else
	printf("This quadratic features 2 imaginary roots! \n");
	//r1 = *r1;
	//r2 = *r2;
	//return 0;
}

//void printImaginary(double *real, double *imag)
//{
//	printf("This quadratic features 2 imaginary roots! \n");
	//Roots are: %.2lf+%.2lfi and %.2lf-%.2lfi \n", real, imag, real, imag);
	//return 0;
//}
