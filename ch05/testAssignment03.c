#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ehs(int money);
double wlvp(void);

int ehs(int money)
{
	printf("�Ž�����? ");
	scanf("%d", &money);

	money -= money % 10;
	printf("�Ž����� (10���̸� ����): %d\n", money);

	return money;
}

double wlvp(void)
{
	int money = 0;
	money = ehs(money);

	if (money / 50000 != 0)
	{
		printf("50000�� %d��\n", money / 50000);
		money %= 50000;
	}
	if (money / 10000 != 0)
	{
		printf("10000�� %d��\n", money / 10000);
		money %= 10000;
	}
	if (money / 5000 != 0)
	{
		printf("5000�� %d��\n", money / 5000);
		money %= 5000;
	}
	if (money / 1000 != 0)
	{
		printf("1000�� %d��\n", money / 1000);
		money %= 1000;
	}
	if (money / 100 != 0)
	{
		printf("100�� %d��\n", money / 100);
		money %= 100;
	}
	if (money / 10 != 0)
	{
		printf("10�� %d��\n", money / 10);
		money %= 10;
	}

	return 0;
}

int main(void)
{
	wlvp();
	return 0;
}