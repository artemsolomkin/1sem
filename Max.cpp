#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0, number = 0;
	scanf("%d", &n); //вводим кол-во чисел
	scanf("%d", &number); //вводим первое число
	int max_number = number;
	for (int i = 0; i < n - 1; i++) {
		scanf("%d", &number);
		if (number > max_number) {
			max_number = number;  //сравниваем введенное число с максимумом и меняем максимум, если число больше
		}
	}
	printf("%d", max_number); //выводим максимум
}
