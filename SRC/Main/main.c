/*
main.c
Authors: Joseph Alflen, Joshua Inniger, Ailun Shen
Follows C11 & GNU Coding Standards 
*/

#include <stdio.h>
#include "main.h"
#include "../Input/input.h"
#include "../Output/output.h"

//global variables for coefficients, results, and a flag for imaginary numbers.
double a, b, c, r1, r2;
bool imagFlag;

main()
{
	getInput(&a, &b, &c);
	quad(a, b, c, &imagFlag, &r1, &r2);
	printRoots(r1, r2, imagFlag);
}
