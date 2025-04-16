/*파일명: Core C Assignment06.c

*내용 : 아파트 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오. 1m^2는 0.3025평에 해당한다. 프로그램을 작성할 떄
* 이름 있는 상수를 이용해보자.

*작성자 : 정찬민

*날짜 : 2025.04.03

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void apt(void)
{
	double mt;

	printf("아파트의 면적(제곱미터)?");
	scanf("%lf", &mt);

	printf("%.2lf 제곱미터 = %.2lf 평", mt, mt * 0.3025);

	return 0;
}

int main(void)
{
	apt();
	return 0;
}