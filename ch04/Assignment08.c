/*파일명: Core C Assignment08

*내용 : 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오. 이때 파이는 3.141592라고 하자.

*작성자 : 정찬민

*날짜 : 2025.04.09

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double qnvl(double x);
int assignment0408(void);

int main(void)
{
	int r = assignment0408();
	return r;
}

int assignment0408(void)
{
	double x = 0.0;
	printf("반지름의 길이?");
	scanf("%lf", &x);

	double result = qnvl(x);

	printf("구의 부피: %lf", result);

	return 0;
}

double qnvl(double x)
{
	double dnjs = 0.0;
	dnjs = 4.0 / 3.0 * 3.141592 * x * x * x;

	return dnjs;
}
