#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 512
char* brackets_check(const char* a) {
    switch (*a) {
    case '\0':
    case ')':
    case '}':
    case ']':
    case '>':
        return (char*)a;
    case '(': {
        char* ans = brackets_check(a + 1);
        if (*ans == ')') {
            return brackets_check(ans + 1);
        }
        else return (char*)a;
    }
    case '{': {
        char* ans = brackets_check(a + 1);
        if (*ans == '}') {
            return brackets_check(ans + 1);
        }
        else return (char*)a;
    }
    case '[': {
        char* ans = brackets_check(a + 1);
        if (*ans == ']') {
            return brackets_check(ans + 1);
        }
        else return (char*)a;
    }
    case '<': {
        char* ans = brackets_check(a + 1);
        if (*ans == '>') {
            return brackets_check(ans + 1);
        }
        else return (char*)a;
    }
    /*case '"': {
    }*/
    default:
        return brackets_check(a + 1);
    }
}

int main() {
    char buf[N];

    while (printf("Write brackets: ") && fgets(buf, N, stdin)){
        printf("%s\n", (*brackets_check(buf)) ? "BAD" : "GOOD");
    }
}
