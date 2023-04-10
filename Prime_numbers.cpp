#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int x) {
	int i;
	if (x == 1 || x == 2) {
		return 1;
	}
	for (i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return 0;
			break;
		}
	}
	if (i > sqrt(x) - 1) {
		return 1;
	}
}

int main() {
	int number;
	scanf("%d", &number);
	if (is_prime(number)) {
		printf("Prime");
	}
	else {
		printf("Composite");
	}
}
