/*파일명: Core C Assignment04.c

*내용 : 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오. 힘의 크기는
* N 단위로 입력받고, 이동한 거리는 m 단위로 입력받는다.

*작성자 : 정찬민

*날짜 : 2025.04.03

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void strong(void)
{
	float num;
	float road;

	printf("힘(N)?");
	scanf("%f", &num);

	printf("이동거리(m)?");
	scanf("%f", &road);

	printf("일의 양: %.2f J", num * road);

	return 0;
}

int main(void)
{
	strong();
	return 0;
}