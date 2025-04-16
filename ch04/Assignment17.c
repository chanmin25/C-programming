/*파일명: Core C Assignment17

*내용 : 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다. 7번쨰 비트만 1인 값, 15번쨰 비트만 1인 값, 23번쨰 비트만 1인
* 값, 31번째 비트만 1인 값을 구해서 16진수와 10진수로출력하는 프로그램을 작성하시오.

*작성자 : 정찬민

*날짜 : 2025.04.10

*버전 : v1.0
*/

#include <stdio.h>

void qlxm(void)
{
	unsigned int bit7 = 1 << 7;
	unsigned int bit15 = 1 << 15;
	unsigned int bit23 = 1 << 23;
	unsigned int bit31 = 1 << 31;

	printf("7번 비트만 1인 값: %08X ,%d \n", bit7, bit7);
	printf("15번 비트만 1인 값: %08X ,%d \n", bit15, bit15);
	printf("23번 비트만 1인 값: %08X ,%d \n", bit23, bit23);
	printf("31번 비트만 1인 값: %08X, %d \n", bit31, bit31);

	return 0;
}

int main(void)
{
	qlxm();
	return 0;
}