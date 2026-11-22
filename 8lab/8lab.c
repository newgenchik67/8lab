#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int n = 0;
	double x = 0.0;
	double x_pow = 1.0;
	double sum = 0.0;
	printf("Введите натуральное n: ");
	scanf("%d", &n);
	printf("Введите действительное x: ");
	scanf("%lf", &x);
	for (int i = 1; i <= n; i++) {
		x_pow *= x;
		sum += cos(x_pow);
	}
	printf("Результат: %lf\n", sum);
	return 0;
}