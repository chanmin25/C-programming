/*파일명: Core C Assignment03

*내용 : 거스름돈의 금액을 입력받아 오만원, 만원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서 출력하시오.
* 십원 미만 단위는 절사한다.

*작성자 : 정찬민

*날짜 : 2025.04.21

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ehs(void)
{
	int money;
	printf("거스름돈? ");
	scanf("%d", &money);

	money -= money % 10;
	printf("거스름돈 (10원미만 절사): %d\n", money);

	if ((money / 50000) != 0)
	{
		printf("%5d %2d\n", 50000, money / 50000);
		money %= 50000;
	}

	if ((money / 10000) != 0)
	{
		printf("%5d %2d\n", 10000, money / 10000);
		money %= 10000;
	}

	if ((money / 5000) != 0)
	{
		printf("%5d %2d\n", 5000, money / 5000);
		money %= 5000;
	}

	if ((money / 1000) != 0)
	{
		printf("%5d %2d\n", 1000, money / 1000);
		money %= 1000;
	}

	if ((money / 100) != 0)
	{
		printf("%5d %2d\n", 100, money / 100);
		money %= 100;
	}

	if ((money / 10) != 0)
	{
		printf("%5d %2d\n", 10, money / 10);
		money %= 10;
	}
}

int main(void)
{
	ehs();
	return 0;
}