#include <stdio.h>
#include "input.h"

int main()
{
  	double a, b, c, determinant, r1,r2, real, imag;
	getInput(&a, &b, &c);
	quad(a, b, c);

  	return 0;
}
