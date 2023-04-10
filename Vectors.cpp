#define _CRT_SECURE_NO_WARNINGS
#define PI  3.14159265358979323846
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Vector {
	int x;
	int y;
};
long double Find_angle(struct Vector a, struct Vector b) {
	long double moda = sqrt((a.x) * (a.x) + (a.y) * (a.y)); //находим модуль вектора а
	long double modb = sqrt((b.x) * (b.x) + (b.y) * (b.y)); //находим модуль вектора b
	long double answer = (a.x * b.x + a.y * b.y) / (moda * modb); //находим косинус угла
	return (acosl(answer));
}

int main() {
	struct Vector a;
	struct Vector b;
	scanf("%d %d %d %d", &(a.x), &(a.y), &(b.x), &(b.y));
	long double alpha = Find_angle(a, b);
	printf("%lg", alpha);
}
