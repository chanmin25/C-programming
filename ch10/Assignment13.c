/*���ϸ�: Core C Assignment13

*���� : ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�. ���簢���� ���ϴ����� ���������� �����Ǹ� ���� ��ǥ�� POINT ����ü�� 
* �̿��ؼ� ��Ÿ����. ���簢�� ������ ����ϴ� print_rect �Լ��� ���� �ϰ�, RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� 
* ���α׷��� �ۼ��Ͻÿ�.
*�ۼ��� : ������

*��¥ : 2025.06.07

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Am13_square.h"

void Assignment13()
{
	RECT rect;

	printf("���簢���� ���ϴ���(x,y)? ");
	scanf("%d %d", &rect.top.x, &rect.top.y);

	printf("���簢���� ������(x,y)? ");
	scanf("%d %d", &rect.bottom.x, &rect.bottom.y);

	print_rect(rect);
}

int main()
{
	Assignment13();
	return 0;
}