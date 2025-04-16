/*파일명: Core C Assignment15

*내용 : 환전수수료율은 은행마다 미리 정해지며, 환전우대율은 고객마다 다르게 책정된다. 환전수수료율은 1.75%로 정해져 있다고 가정하고
* 원-달러 매매기준율과 환전우대율을 입력받아 달러를 살 떄 젹용되는 환율을 결정하고, 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에
* 해당하는지 출력하는 프로그램을 작성하시오.

*작성자 : 정찬민

*날짜 : 2025.04.09

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dmsgod(void)
{
	double aoao;
	double ghksdbf;

	printf("원/달러 매매기준율? ");
	scanf("%lf", &aoao);

	printf("환율우대율 (0~100%)? ");
	scanf("%lf", &ghksdbf);

	double dbf = 0.0;
	dbf = aoao + (aoao * 0.0175F * (1 - ghksdbf / 100));
	printf("달러 살 떄 환율은 %.6lf 입니다.\n", dbf);

	double ekffj = 0.0;

	printf("구입할 달러(USD)? ");
	scanf("%lf", &ekffj);

	printf("USD %.2f 살 때 ==> KRW %.2f", ekffj, dbf * ekffj);

	return 0;
}

int main(void)
{
	dmsgod();
	return 0;
}