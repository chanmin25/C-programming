/*���ϸ�: Core C Assignment04

*���� : ������ �Է¹޾� �������� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ �Ǵ� ������ ������ ����.

*�ۼ��� : ������

*��¥ : 2025.04.21

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void duseh(void)
{
	int year;
	printf("����? ");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				printf("%d���� �����Դϴ�.", year);
			}
			else
			{
				printf("%d���� ����Դϴ�.", year);
			}
		}
		else
		{
			printf("%d���� �����Դϴ�.", year);
		}
	}
	else
	{
		printf("%d���� ����Դϴ�", year);
	}

	return 0;
}

int main(void)
{
	duseh();
	return 0;
}