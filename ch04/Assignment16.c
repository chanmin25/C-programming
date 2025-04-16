/*파일명: Core C Assignment16

*내용 : 컴퓨터 시스템에서는 32비트 데이터의 최하위 바이트부터 red, green, blue의 순서로 색상 정보를 저장하고 최상위 바이트는 사용하지
* 않고 0으로 채운다. 0~255사이의 값을 red, green, blue의 순서로 3개입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오.
* RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.

*작성자 : 정찬민

*날짜 : 2025.04.10

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void zjavbxj(void)
{
	unsigned char vl, ch, vk;
	int rgb;

	printf("red? ");
	scanf("%hhu", &vl);

	printf("green? ");
	scanf("%hhu", &ch);

	printf("blue? ");
	scanf("%hhu", &vk);

	rgb = vl | ch << 8 | vk << 16;
	printf("RGB 트루걸러: %06X", rgb);

	return 0;
}

int main(void)
{
	zjavbxj();
	return 0;
}