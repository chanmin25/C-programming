/*���ϸ�: Core C Assignment03

*���� : �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ��� �ۼ��Ͻÿ�. distance �Լ��� �̿��ؼ� �Է� ���� ���������� ���� ������ ���� �Ÿ���
* ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*�ۼ��� : ������

*��¥ : 2025.05.20.

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

double distance(int x1, int y1, int x2, int y2)
{
	int result = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

	return result;
}

void wlr(void)
{
	int x1, y1, x2, y2;

	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &x1, &y1);

	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) ������ ����: %.6f", x1, y1, x2, y2, distance(x1, y1, x2, y2));
}

int main(void)
{
	wlr();
	return 0;
}