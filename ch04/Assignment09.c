/*파일명: Core C Assignment09

*내용 : 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.

*작성자 : 정찬민

*날짜 : 2025.04.09

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void time(void)
{
	int num;
	printf("재생시간(초)?");
	scanf("%d", &num);

	int hour = num / 3600;
	int minute = (num % 3600) / 60;
	int second = num % 60;

	printf("재생시간은 %d시간 %d분 %d초 입니다", hour, minute, second);

	return 0;
}

int main(void)
{
	time();
	return 0;
}