#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int binomialCoefficients(int n, int k) {
	if (k == 0 || k == n)
		return 1;
	return binomialCoefficients(n - 1, k - 1) + binomialCoefficients(n - 1, k);
}
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d", binomialCoefficients(n, k));
}
