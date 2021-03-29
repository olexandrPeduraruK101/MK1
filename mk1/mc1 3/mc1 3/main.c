#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	float S; float p;
	float procent; float profit;
	setlocale(LC_CTYPE, "ru");
	printf("¬веди ск≥льки отримаЇ прац≥вник без податку: ");
		scanf("%f", &S);
	printf("¬веди процент податку: ");
		scanf("%f", &p);

	procent = S * p/100;
	profit = S - procent;

	printf("\n\tчистий прибуток =  %.2f грн\n", profit);
	


	return 0;
}