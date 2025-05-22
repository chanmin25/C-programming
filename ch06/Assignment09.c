/*파일명: Core C Assignment09

*내용 : red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를 정의하시오. 앞에서 정의한 get_red, get_green, get_blue 함수를 
* 함께 이용해서 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오. 
*작성자 : 정찬민

*날짜 : 2025.05.22

*버전 : v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int make_rgb(unsigned char red, unsigned char green, unsigned char blue)
{
	return (red << 16) | (green << 8) | blue;
}

unsigned char get_red(unsigned int color)
{
	return (color >> 16) & 0xFF;
}

unsigned char get_green(unsigned int color)
{
	return (color >> 8) & 0xFF;
}

unsigned char get_blue(unsigned int color)
{
	return ~color & 0xFF;
}

unsigned int get_not(unsigned int color)
{
	return ~color & 0xFFFFFF;
}

void body(void)
{
	unsigned int color;

	printf("RGB 색상: ");
	scanf("%x", &color);

	unsigned int not = get_not(color);

	printf("RGB %06X의 보색: %06X\n", color, not);

	return 0;
}


int main(void)
{
	body();
	return 0;
}