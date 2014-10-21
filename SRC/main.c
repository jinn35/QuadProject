/*main.c*/
/*follows GNU Coding Standards*/

#include <stdio.h>
#include "main.h"
#include "input.h"
#include "output.h"

double a, b, c, r1, r2;
bool imagFlag;

int main()
{
  	//double a, b, c, determinant, r1, r2;
	getInput(&a, &b, &c);
	quad(a, b, c, &imagFlag, &r1, &r2);
	printRoots(r1, r2, imagFlag);
	
  	return 0;
}
