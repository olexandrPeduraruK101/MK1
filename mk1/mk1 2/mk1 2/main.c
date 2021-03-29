#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

	unsigned int katet1; unsigned int katet2;
	float gipotenuza; float s;

	setlocale(LC_CTYPE, "ru");
	printf("Вед1ть значення першого катета: ");
		scanf("%d", &katet1);
		printf("Вед1ть значення другого катета: ");
		scanf("%d", &katet2);
		gipotenuza = (float)sqrt(pow(katet1, 2) + pow(katet2, 2));
		s = (float) 0.5 * katet1 * katet2;
		printf("\n\t гипотенуза \t площа\n");
		printf("\n\t %.3f \t         %.3f \n", gipotenuza, s);
		
	return 0;
}
