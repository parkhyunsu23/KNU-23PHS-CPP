#include <stdio.h>

int main(void)
{
	int a, b;

	for (a = 2; a <= 9; a++) {
		if (a == 5)continue;

			for (b = 1; b <= 9; b++) {
				printf("%d = %d = %d\n", a, b, a * b);
			}
	}
	return 0;
}