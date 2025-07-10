/*파일명: Core C Assignment17

*내용 : 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하시오. 주차 요금은 최초 30분은 2000원,
* 그 이후는 10분당 1000원씩으로 계산라며, 하루 최대 25000원을 넘을 수 없다. 주차 시간은 24시간을 넘을 수는 없다고 가정한다.

*작성자 : 정찬민

*날짜 : 2025.04.21

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am17()
{
	int minute;
	int fee = 0;

	printf("주차 시간(분)? ");
	scanf("%d", &minute);

	if (minute < 0 || minute > 1440)
	{
		printf("잘못된 입력입니다. 주차시간은 0분 이상 1440분 이하로 입력해주세요.");
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

	printf("주차 요금: %d\n", fee);
}

int main()
{
	Am17();
	return 0;
}
