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
	char *p;
  	printf("Enter coefficients a, b and c: ");
	scanf("%lf%lf%lf",&*a,&*b,&*c);

	//if (fgets(buf, sizeof(buf), stdin) != NULL)	
	//sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );
  	
  	//printf("Your input is %lf, %lf, %lf . Input successfully read.", a,b,c);
}
