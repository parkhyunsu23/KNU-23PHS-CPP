#include <stdio.h>
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int n;
    printf("계산할 팩토리얼 값 입력: ");
    scanf_s("%d", &n);
    printf("%d", factorial(n));

    return 0;
}