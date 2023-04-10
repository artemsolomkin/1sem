#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int MAX(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}
int MIN(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int number;
	scanf("%d", &number);
	int min = number;
	int max = number;
	int min2 = number;
	int max3 = number;
	int max2 = number;


	while (scanf("%d", &number) == 1) {
		min = MIN(min, number);
		max = MAX(max, number);
		max2 = MAX(MAX(max2, number * min), number * max);
		min2 = MIN(MIN(min2, number * min), number * max);
		max3 = MAX(MAX(max3, min2 * number), max2 * number);

	}
	printf("%d", max3);
}
