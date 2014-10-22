/*
input.c
Authors: Joseph Alflen, Joshua Inniger, Ailun Shen
Follows C11 & GNU Coding Standards 
*/

#include <stdio.h>
#include "input.h"
#include "../Quad/quad.h"

//grabs input from user via keyboard
void getInput(double *a, double *b, double *c)
{
	char buf[20];
  	printf("Enter coefficients a, b and c seperated by a space: ");
	if (fgets(buf, sizeof(buf), stdin) != NULL)
	{
		printf ("Thank you, you entered >%s<\n", buf);
		sscanf(buf, "%lf %lf %lf", &*a, &*b, &*c);
	}	
}
