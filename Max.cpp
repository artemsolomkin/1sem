#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0, number = 0;
	scanf("%d", &n); //������ ���-�� �����
	scanf("%d", &number); //������ ������ �����
	int max_number = number;
	for (int i = 0; i < n - 1; i++) {
		scanf("%d", &number);
		if (number > max_number) {
			max_number = number;  //���������� ��������� ����� � ���������� � ������ ��������, ���� ����� ������
		}
	}
	printf("%d", max_number); //������� ��������
}
