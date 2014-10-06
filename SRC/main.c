
/*
Ax^2 + Bx+C = 0;
B*B-4AC >=0
! ---------------------------------------------------
!   Solve  Ax^2 + Bx + C = 0 given B*B-4*A*C >= 0
!   Now, we are able to detect complex roots.
! ---------------------------------------------------
main.c
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
   float a,b,c,det,r1,r2;
	/*
	REAL  :: a, b, c
   REAL  :: d
   REAL  :: root1, root2 */

   printf("Enter coefficients a, b and c: \n");
   scanf("%f%f%f",&a,&b,&c);
   det=b*b-4*a*c;

   if(det>0)
   {
      r1= (-b+sqrt(det))/(2*a);
      r2= (-b-sqrt(det))/(2*a);
      printf("Roots are: %.2f and %.2f",r1 , r2);
   }
   /*
   READ(*,*)  a, b, c
   WRITE(*,*) 'a = ', a
   WRITE(*,*) 'b = ', b
   WRITE(*,*) 'c = ', c
   WRITE(*,*)
	printf("Hello World@ \n");
	*/
	return 0;
}