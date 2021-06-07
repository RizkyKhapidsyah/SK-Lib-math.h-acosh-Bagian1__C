/* acosh example */
#include <stdio.h>      /* printf */
#include <math.h>       /* acosh, exp, sinh */
#include <conio.h>		/* _getch() */

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double x, result;

	x = exp(2) - sinh(2);
	result = acosh(x);

	printf("The area hyperbolic cosine of %f is %f radians.\n", x, result);
	
	_getch();
	return 0;
}