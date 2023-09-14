#include <stdio.h>

int main(void)
{
	int num;
	scanf_s("%d", &num);

	if (num > 0)
		printf("양의 정수 (%d)\n", num);
	else if (num < 0)
		printf("음의 정수 (%d)\n", num);
	else
		printf("0 입니다.");
	return 0;
}