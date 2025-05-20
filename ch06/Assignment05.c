/*���ϸ�: Core C Assignment05

*���� : ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� Ȧ������ �˻��ϴ� is_odd �Լ��� �ۼ��Ͻÿ�. �� �Լ��� �̿��ؼ� 0�� �Էµ� ������
* �Էµ� �����鿡 ���ؼ� �A���� ������ Ȧ���� ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*�ۼ��� : ������

*��¥ : 2025.05.20.

*���� : v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int wkr)
{
	return wkr % 2 == 0;
}

int is_odd(int wkr)
{
	return wkr % 2 != 0;
}

void aha(void)
{
	int wkr;
	int even_tp = 0, odd_tp = 0;

	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	while (1)
	{
		scanf("%d", &wkr);

		if (wkr == 0)
			break;

		if (is_even(wkr))
		{
			even_tp++;
		}
		else if (is_odd(wkr))
		{
			odd_tp++;
		}
	}

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", even_tp, odd_tp);

	return 0;
}

int main(void)
{
	aha();
	return 0;
}