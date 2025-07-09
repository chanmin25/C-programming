/*파일명: Core C Assignment02.c

*내용 : 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

*작성자 : 정찬민

*날짜 : 2025.04.03

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am02()
{
	int x;
	int y;

	printf("가로의 길이? ");
	scanf("%d", &x);

	printf("세로의 길이? ");
	scanf("%d", &y);

	printf("직사각형의 넓이: %d\n", x * y);
	printf("직사각형의 둘레: %d", x * 2 + y * 2);
}

int main()
{
	Am02();
	return 0;
}