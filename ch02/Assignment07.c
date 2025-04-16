/*파일명: Assignment07.c

*내용 : 커피 사이즈와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오. 커피사이즈는 S,T,G 세 가지 문자 중 하나로 입력받는다.

*작성자 : 정찬민

*날짜 : 2025.3.23

*버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void coffee(void)
{
	int num;
	char size;

	printf("커피 사이즈(S,T,G)와 주문 수량?");
	scanf("%c %d", &size, &num);

	printf("%c 사이즈 %d잔을 주문합니다.\n", size, num);

	return 0;
}

int main(void)
{
	coffee();
	return 0;
}