#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int val = 1;
	for (i = 0; i < 10; i++) {
		printf("i=%d val=%d sum=%d", i, val, sum);
		sum += val;
		val += 1;
	}

	printf("sum = %d\n", sum);
	return 0;
}