/*���ϸ�: Core C Assignment01

*���� : ���� ��ǥ (x, y)�� �Է¹޾� ��ũ�� ������ ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�. ��ũ�� ���� ����
* ������ ���簢�� ����� �������� ���簢���� �»������ ���ϴ����� ���ؼ� �����ȴ�.

*�ۼ��� : ������

*��¥ : 2025.04.21

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rjatk(void)
{
	int left, right, top, bottom, x, y;

	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &left, &top);

	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &bottom);

	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (left < x < right && top < y < bottom)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}

	else
	{
		printf("���簢�� ����� ���� ���� ���� ���� �ƴմϴ�.");
	}
		
	return 0;
}

int main(void)
{
	rjatk();
	return 0;
}