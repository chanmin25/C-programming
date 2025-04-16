/*파일명: Core C Assignment02

*내용 : 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램을 작성하시오.

*작성자 : 정찬민

*날짜 : 2025.04.09

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dhseh(void)
{
	double a;
	printf("화씨온도?");
	scanf("%lf", &a);

	printf("%.2f F = %.2f C", a, (a - 32) * 5.0 / 9.0);

	return 0;
}

int main(void)
{
	dhseh();
	return 0;
}