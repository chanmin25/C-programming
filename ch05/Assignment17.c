/*파일명: Core C Assignment17

*내용 : 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하시오. 주차 요금은 최초 30분은 2000원,
* 그 이후는 10분당 1000원씩으로 계산라며, 하루 최대 2500원을 넘을 수 없다. 주차 시간은 24시간을 넘을 수는 없다고 가정한다.

*작성자 : 정찬민

*날짜 : 2025.

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void parking(void)
{
	int minute, total, price;
	printf("주차 시간(분)? ");
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

	printf("주차 요금: %d원\n", price);
}

int main(void)
{
	parking();
	return 0;
}