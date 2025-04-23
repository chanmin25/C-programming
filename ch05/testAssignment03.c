#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ehs(int money);
double wlvp(void);

int ehs(int money)
{
	printf("거스름돈? ");
	scanf("%d", &money);

	money -= money % 10;
	printf("거스름돈 (10원미만 절사): %d\n", money);

	return money;
}

double wlvp(void)
{
	int money = 0;
	money = ehs(money);

	if (money / 50000 != 0)
	{
		printf("50000원 %d장\n", money / 50000);
		money %= 50000;
	}
	if (money / 10000 != 0)
	{
		printf("10000원 %d장\n", money / 10000);
		money %= 10000;
	}
	if (money / 5000 != 0)
	{
		printf("5000원 %d장\n", money / 5000);
		money %= 5000;
	}
	if (money / 1000 != 0)
	{
		printf("1000원 %d장\n", money / 1000);
		money %= 1000;
	}
	if (money / 100 != 0)
	{
		printf("100원 %d장\n", money / 100);
		money %= 100;
	}
	if (money / 10 != 0)
	{
		printf("10원 %d장\n", money / 10);
		money %= 10;
	}

	return 0;
}

int main(void)
{
	wlvp();
	return 0;
}