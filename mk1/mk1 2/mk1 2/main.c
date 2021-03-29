#include <stdio.h>
#include <math.h>
#include <locale.h>//підключення бібліотек

int main() {//запуск програми

	unsigned int katet1; unsigned int katet2;
	float gipotenuza; float s; // введення змінних

	setlocale(LC_CTYPE, "ru");
	printf("Вед1ть значення першого катета: ");//ввиведення даних
		scanf("%d", &katet1);//введення даних
		printf("Вед1ть значення другого катета: ");//ввиведення даних
		scanf("%d", &katet2);//введення даних
		gipotenuza = (float)sqrt(pow(katet1, 2) + pow(katet2, 2));// formula pifagora
		s = (float) 0.5 * katet1 * katet2;//ploscha trikutnika
		printf("\n\t гипотенуза \t площа\n");//ввиведення даних
		printf("\n\t %.3f \t         %.3f \n", gipotenuza, s);//ввиведення даних
		
	return 0; //кінець програми
}
