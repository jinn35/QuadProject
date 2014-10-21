/* quad.c*/
/*follows GNU Coding Standards*/
#include <math.h> /* This is needed to use sqrt() function.*/
#include "quad.h"
#include <stdio.h>

void quad(double a, double b, double c, bool *imagFlag, double *r1, double *r2)
{

	double determinant = b*b-4*a*c;

	if (determinant>0)
  	{
      		*r1= (-b+sqrt(determinant))/(2*a);
      		*r2= (-b-sqrt(determinant))/(2*a);
		*imagFlag = false;
		//int x = out1(r1,r2);
  	}
  	else if (determinant==0)
  	{
    		*r1 = *r2 = -b/(2*a);
		*imagFlag = false;
		//int y = out1(r1,r2);
  	}
  	else
  	{
    		*r1= -b/(2*a);
    		*r2 = sqrt(-determinant)/(2*a);
		*imagFlag = true;
		//int z = out3(real,imag);
  	}

}
