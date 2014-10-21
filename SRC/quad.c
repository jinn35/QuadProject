/* quad.c*/
/*follows GNU Coding Standards*/
#include <math.h> /* This is needed to use sqrt() function.*/
#include "quad.h"
#include "output.h"
#include <stdio.h>

//bool *imagFlag;
//double a, b, r1, r2;

void quad(double a, double b, double c, bool *imagFlag, double *r1, double *r2)
{
	//double determinant, r1, r2, real, imag;
	//bool imagFlag;
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
		//int y = out1(r1,r2);
		*imagFlag = false;
  	}
  	else
  	{
    		*r1= -b/(2*a);
    		*r2 = sqrt(-determinant)/(2*a);
		*imagFlag = true;
		//int z = out3(real,imag);
  	}
	//return 0.0;
}
