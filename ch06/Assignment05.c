/*파일명: Core C Assignment05

*내용 : 인자로 전달받은 정수가 짝수인지 검사하는 is_even 함수와 홀수인지 검사하는 is_odd 함수를 작성하시오. 두 함수를 이용해서 0이 입력될 떄까지
* 입력된 정수들에 대해서 짞수의 개수롸 홀수의 개수를 구래서 출력하는 프로그램을 작성하시오.
*작성자 : 정찬민

*날짜 : 2025.05.20.

*버전 : v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int wkr)
{
	return wkr % 2 == 0;
}

int is_odd(int wkr)
{
	return wkr % 2 != 0;
}

void aha(void)
{
	int wkr;
	int even_tp = 0, odd_tp = 0;

	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

	while (1)
	{
		scanf("%d", &wkr);

		if (wkr == 0)
			break;

		if (is_even(wkr))
		{
			even_tp++;
		}
		else if (is_odd(wkr))
		{
			odd_tp++;
		}
	}

	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", even_tp, odd_tp);

	return 0;
}

int main(void)
{
	aha();
	return 0;
}