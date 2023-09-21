#include <stdio.h>

int main()
{
	int num1, num2;
	int sel;
	int result;
	while (true)
	{
		printf("1.µ¡¼À 2.»¬¼À 3.°ö¼À 4.³ª´°¼À\n");
		scanf_s("%d", &sel);
		printf("µÎ°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä.\n");
		scanf_s("%d%d", &num1, &num2);
		if (sel == 1)
		{
			result = num1 + num2;
			printf("µ¡¼À °á°ú : %d\n", result);
		}
		else if (sel == 2)
		{
			result = num1 - num2;
			printf("»¬¼À °á°ú : %d\n", result);
		}
		else if (sel == 3)
		{
			result = num1 * num2;
			printf("°ö¼À °á°ú : %d\n", result);
		}
		else if (sel == 4)
		{
			result = num1 / num2;
			printf("³ª´°¼À °á°ú : %d\n", result);
		}
		else
		{
			printf("¼ýÀÚ¸¦ Àß¸ø ÀÔ·ÂÇÏ¼Ë½À´Ï´Ù.´Ù½Ã ÀÔ·ÂÇØÁÖ¼¼¿ä. \n");
		}
	}
	return 0;
}

