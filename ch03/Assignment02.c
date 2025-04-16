/*파일명: Core C Assignment02.c

*내용 : 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

*작성자 : 정찬민

*날짜 : 2025.04.03

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void width(void)
{
	int num = 0;
	int sero = 0;

	printf("가로의 길이?");
	scanf("%d", &num);

	printf("세로의 길이?");
	scanf("%d", &sero);

	printf("직사각형의 넓이:%d \n", num * sero);
	printf("직사각형의 둘레:%d", num * 2 + sero * 2);

	return 0;
}

int main(void)
{
	width();
	return 0;
}