/*���ϸ�: Core C Assignment02.c

*���� : ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

*�ۼ��� : ������

*��¥ : 2025.04.03

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am02()
{
	int x;
	int y;

	printf("������ ����? ");
	scanf("%d", &x);

	printf("������ ����? ");
	scanf("%d", &y);

	printf("���簢���� ����: %d\n", x * y);
	printf("���簢���� �ѷ�: %d", x * 2 + y * 2);
}

int main()
{
	Am02();
	return 0;
}