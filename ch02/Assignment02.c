/*���ϸ�: Assignment02.c

*���� : �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.

*�ۼ��� : ������

*��¥ : 2025.3.20

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am02()
{
	int num;
	double score;

	printf("��ȣ? ");
	scanf("%d", &num);

	printf("����? ");
	scanf("%lf", &score);

	printf("%d�� �л��� ������ %.1lf�Դϴ�.", num, score);
}

int main()
{
	Am02();
	return 0;
}