/*파일명: Assignment05.c

*내용 : 몸무게를 입력받아서 출력하는 프로그램을 작성하시오. 몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력한다.

*작성자 : 정찬민

*날짜 : 2025.3.20

*버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void weight(void)
{
	float x;

	printf("몸무게?");
	scanf("%f", &x);

	printf("입력한 몸무게는 %.2f KG입니다.\n", x);

	return 0;
}

int main(void)
{
	weight();
	return 0;
}