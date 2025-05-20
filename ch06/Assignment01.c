/*파일명: Core C Assignment01

*내용 : 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter 함수를 작성하시오. get_perimeter 함수를 이용해서 입력받은 가로
* ,세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.
*작성자 : 정찬민

*날짜 : 2025.05.20.

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int rk, int tp)
{
	int enffp;

	enffp = rk * 2;
	enffp += tp * 2;
	return enffp;
}


void wjs(void)
{
	int rk, tp;

	printf("가로? ");
	scanf("%d", &rk);

	printf("세로? ");
	scanf("%d", &tp);


	printf("직사각형의 둘레: %d", get_perimeter(rk, tp));

	return 0;
}

int main(void)
{
	wjs();
	return 0;
}