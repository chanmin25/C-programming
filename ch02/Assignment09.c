/*���ϸ�: Assignment09.c

*���� : 16���� ������ �Է¹޾� 10����������ϴ� ���α׷��� �ۼ��Ͻÿ�.

*�ۼ��� : ������

*��¥ : 2025.3.23

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am09()
{
	int num;

	printf("16���� ����? ");
	scanf("%x", &num);

	printf("16���� %x�� 10���� %d�Դϴ�.", num, num);
}

int main()
{
	Am09();
	return 0;
}
