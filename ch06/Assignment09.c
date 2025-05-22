/*���ϸ�: Core C Assignment09

*���� : red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb �Լ��� �����Ͻÿ�. �տ��� ������ get_red, get_green, get_blue �Լ��� 
* �Բ� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
*�ۼ��� : ������

*��¥ : 2025.05.22

*���� : v1.0
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

	printf("RGB ����: ");
	scanf("%x", &color);

	unsigned int not = get_not(color);

	printf("RGB %06X�� ����: %06X\n", color, not);

	return 0;
}


int main(void)
{
	body();
	return 0;
}