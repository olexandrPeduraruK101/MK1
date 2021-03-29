#include <stdio.h>
#include <math.h>



int main() {

	float x; float y; float f;


	printf("Vedit diysne chuslo x: ");
	scanf("%f", &x);

	printf("Vedit diysne chuslo y: ");
	scanf("%f", &y);

	
	f = ((pow(x, 2) * pow(y, 2)) / (sqrt(x + y)));
		
	printf("\n\tf = %.3f\n", f);



	return 0;
}