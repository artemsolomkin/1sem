#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void multiply(int F[2][2], int M[2][2]) {
    int a = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    int b = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    int c = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    int d = F[1][0] * M[0][1] + F[1][1] * M[1][1];
    F[0][0] = a;
    F[0][1] = b;
    F[1][0] = c;
    F[1][1] = d;
}
void power(int F[2][2], int n) {
    if (n == 0 || n == 1)
        return;
    int M[2][2] = { {1,1},{1,0} };
    power(F, n / 2);
    multiply(F, F);
    if (n % 2 != 0)
        multiply(F, M);
}
int fibonacci_matrix(int n) {
    int F[2][2] = { {1,1},{1,0} };
    if (n == 0)
        return 0;
    power(F, n - 1);
    return F[0][0];
}
int main() {
    int n;
    while (1) {
        printf("Enter the integer n to find nth fibonacci:");
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        printf("%d\n", fibonacci_matrix(n));
    }
}
