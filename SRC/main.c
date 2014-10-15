/*main.c*/
/*follows GNU Coding Standards*/

#include <stdio.h>
#include "input.h"

int main()
{
  	double a, b, c, determinant;
	getInput(&a, &b, &c);
	quad(a, b, c);
  	return 0;
}
