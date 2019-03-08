#include <stdio.h>

int main() {
	float a, b;
	scanf("%f%f", &a, &b); //& ∆˜¿Œ≈Õ

/*	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float namoji = a / b;*/

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);
	printf("%f * %f = %f\n", a, b, a * b);
	printf("%f / %f = %f\n", a, b, a / b);
}