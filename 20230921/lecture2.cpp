#include <stdio.h>

int main(void) {

	int sel; num1, num2;

	printf("숫자 1을 입력하시오 :");
	scanf_s("%lf", &num1);

	printf("숫자 2를 입력하시오 :");
	scanf_s("%lf", &num2);

	printf("1.더하기 2.빼기 3.곱하기 4.나누기 : ");
	scanf_s("%d", &sel);

	calculator(sel); num1, num2;

	return 0;
}

void calcualtor(int selector);