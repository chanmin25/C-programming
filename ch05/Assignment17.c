/*���ϸ�: Core C Assignment17

*���� : ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ����� ���� 30���� 2000��,
* �� ���Ĵ� 10�д� 1000�������� �����, �Ϸ� �ִ� 25000���� ���� �� ����. ���� �ð��� 24�ð��� ���� ���� ���ٰ� �����Ѵ�.

*�ۼ��� : ������

*��¥ : 2025.04.21

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am17()
{
	int minute;
	int fee = 0;

	printf("���� �ð�(��)? ");
	scanf("%d", &minute);

	if (minute < 0 || minute > 1440)
	{
		printf("�߸��� �Է��Դϴ�. �����ð��� 0�� �̻� 1440�� ���Ϸ� �Է����ּ���.");
		return 0;
	}

	if (minute <= 30)
	{
		fee = 2000;
	}
	else
	{
		int extra_minute = minute - 30;
		int extra_fee = (extra_minute + 9) / 10 * 1000;
		fee = 2000 + extra_fee;
	}

	if (fee > 25000)
	{
		fee = 25000;
	}

	printf("���� ���: %d\n", fee);
}

int main()
{
	Am17();
	return 0;
}
