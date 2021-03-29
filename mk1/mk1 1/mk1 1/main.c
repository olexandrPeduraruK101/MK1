#include <stdio.h>
#include <math.h>//підключення бібліотек



int main() {    //запуск програми

	float x; float y; float f;// введення змінних


	printf("Vedit diysne chuslo x: ");//ввиведення даних
	scanf("%f", &x);//введення даних

	printf("Vedit diysne chuslo y: ");//ввиведення даних
	scanf("%f", &y);//введення даних

	
	f = ((pow(x, 2) * pow(y, 2)) / (sqrt(x + y)));//Формулаяку дали у завданні
		
	printf("\n\tf = %.3f\n", f);//ввиведення даних



	return 0;//кінець програми
}

