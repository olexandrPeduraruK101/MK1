#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	float S; float p;
	float procent; float profit;
	setlocale(LC_CTYPE, "ru");
	printf("����� ������ ������ ��������� ��� �������: ");
		scanf("%f", &S);
	printf("����� ������� �������: ");
		scanf("%f", &p);

	procent = S * p/100;
	profit = S - procent;

	printf("\n\t������ �������� =  %.2f ���\n", profit);
	


	return 0;
}