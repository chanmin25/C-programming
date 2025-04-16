/*파일명: Core C Assignment10.c

*내용 : 원/달러 환율과 달러를 입력받아 몇 월인지 출력하는 프로그램을 작성하시오.

*작성자 : 정찬민

*날짜 : 2025.04.03

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void won(void)
{
	double ekffj;
	double dnjs;

	printf("USD ?");
	scanf("%lf", &ekffj);

	printf("원/달러 환율?");
	scanf("%lf", &dnjs);

	printf("USD %.2f = KRW %.2f", ekffj, ekffj * dnjs);

	return 0;
}

int main(void)
{
	won();
	return 0;
}