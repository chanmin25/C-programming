/*파일명: Core C Assignment03.c

*내용 : 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오. 질량은 kg 단위, 높이는 m 단위로 입력받는다.

*작성자 : 정찬민

*날짜 : 2025.04.03

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double calcPositionEnergy(int weight, int height)
{
	double energy;
	energy = 9.8 * weight * height;
	return energy;
}

void Assignment0303(void)
{
	int kg;
	int m;
	double energy;

	printf("질량(kg)?");
	scanf("%d", &kg);

	printf("높이(m)?");
	scanf("%d", &m);

	energy = calcPositionEnergy(kg, m);
	printf("위치에너지: %.6lf J\n", energy);

	return 0;
}

int main(void)
{
	Assignment0303();
	return 0;
}