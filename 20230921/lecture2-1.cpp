#include <stdio.h>

int main()
{
	int num1, num2;
	int sel;
	int result;
	while (true)
	{
		printf("1.���� 2.���� 3.���� 4.������\n");
		scanf_s("%d", &sel);
		printf("�ΰ��� ������ �Է��ϼ���.\n");
		scanf_s("%d%d", &num1, &num2);
		if (sel == 1)
		{
			result = num1 + num2;
			printf("���� ��� : %d\n", result);
		}
		else if (sel == 2)
		{
			result = num1 - num2;
			printf("���� ��� : %d\n", result);
		}
		else if (sel == 3)
		{
			result = num1 * num2;
			printf("���� ��� : %d\n", result);
		}
		else if (sel == 4)
		{
			result = num1 / num2;
			printf("������ ��� : %d\n", result);
		}
		else
		{
			printf("���ڸ� �߸� �Է��ϼ˽��ϴ�.�ٽ� �Է����ּ���. \n");
		}
	}
	return 0;
}

