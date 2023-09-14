#include <stdio.h>

int main(void)
{
	int a, b;

	for (a = 0; a < 5; a++) {
		for (b = 0; b < a; b++) {
			printf("   ");
		}
		if (a % 2 == 0) printf("| 0 |");
		else printf("| X |");
		printf("\n------------------\n");
	}
	return 0;
}