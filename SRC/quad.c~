/* quad.c*/
/*follows GNU Coding Standards*/
#include <math.h> /* This is needed to use sqrt() function.*/
#include "quad.h"
#include "output.h"
#include <stdio.h>

double quad(double a, double b, double c)
{
	double determinant, r1,r2, real, imag;
	determinant = b*b-4*a*c;

	if (determinant>0)
  	{
      		r1= (-b+sqrt(determinant))/(2*a);
      		r2= (-b-sqrt(determinant))/(2*a);
		int x = out1(r1,r2);
  	}
  	else if (determinant==0)
  	{
    		r1 = r2 = -b/(2*a);
		int y = out2(r1,r2);
  	}
  	else
  	{
    		real= -b/(2*a);
    		imag = sqrt(-determinant)/(2*a);
		int z = out3(real,imag);
  	}
	return 0.0;
}
