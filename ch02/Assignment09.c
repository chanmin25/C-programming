/*파일명: Assignment09.c

*내용 : 16진수 정수를 입력받아 10진수로출력하는 프로그램을 작성하시오.

*작성자 : 정찬민

*날짜 : 2025.3.23

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am09()
{
	int num;

	printf("16진수 정수? ");
	scanf("%x", &num);

	printf("16진수 %x는 10진수 %d입니다.", num, num);
}

int main()
{
	Am09();
	return 0;
}
