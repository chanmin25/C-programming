/*���ϸ�: Core C Assignment01

*���� : ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter �Լ��� �ۼ��Ͻÿ�. get_perimeter �Լ��� �̿��ؼ� �Է¹��� ����
* ,������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*�ۼ��� : ������

*��¥ : 2025.05.20.

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int rk, int tp)
{
	int enffp;

	enffp = rk * 2;
	enffp += tp * 2;
	return enffp;
}


void wjs(void)
{
	int rk, tp;

	printf("����? ");
	scanf("%d", &rk);

	printf("����? ");
	scanf("%d", &tp);


	printf("���簢���� �ѷ�: %d", get_perimeter(rk, tp));

	return 0;
}

int main(void)
{
	wjs();
	return 0;
}