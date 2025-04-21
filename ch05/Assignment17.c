/*���ϸ�: Core C Assignment17

*���� : ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ����� ���� 30���� 2000��,
* �� ���Ĵ� 10�д� 1000�������� �����, �Ϸ� �ִ� 2500���� ���� �� ����. ���� �ð��� 24�ð��� ���� ���� ���ٰ� �����Ѵ�.

*�ۼ��� : ������

*��¥ : 2025.

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void parking(void)
{
	int minute, total, price;
	printf("���� �ð�(��)? ");
	scanf("%d", &minute);

	total = minute / 10;

	if (minute % 10 != 0)
	{
		total++;
	}

	if (total >= 3)
	{
		price = 2000;
		total -= 3;
	}

	if (total < 24)
	{
		price += 1000 * total;

	}

	else
	{
		price = 2500;
	}

	printf("���� ���: %d��\n", price);
}

int main(void)
{
	parking();
	return 0;
}