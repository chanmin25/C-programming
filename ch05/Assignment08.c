/*파일명: Core C Assignment08

*내용 : 비트 연산을 수행하는 계산기를 프로그램하시오. &는 비트 AND, |는 비트 OR, ^는 비트 XOR 연산을 처리한다. 
* "0xAB & 0xCC"처럼 연산식을 입력해서 연산 결과를 구한다. 비트 연산이므로 연산시을 입력받을 떄 10진수, 8진수, 16진수를
* 사용할 수 있게 하고, 연산의 결과는 16진수로 출력한다.

*작성자 : 정찬민

*날짜 : 2025.04.21

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bit(void)
{
	unsigned int x, y, result = 0;
	char ch;

	printf("비트 연산식? ");
	scanf("%x %c %x", &x, &ch, &y);

	if (ch == '&')
	{
		result = x & y;
	}

	else if (ch == '|')
	{
		result = x | y;
	}

	else if (ch == '^')
	{
		result = x ^ y;
	}
	
	printf("%x %c %x = %8x", x, ch, y, result);

	return 0;
}

int main(void)
{
	bit();
	return 0;
}