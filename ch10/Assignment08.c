/*���ϸ�: Core C Assignment08

*���� : Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�. �� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�. 
* PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�. PRODUCT ����ü ������ ������ ���� ��ǰ��, 
* ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�. 
*�ۼ��� : ������

*��¥ : 2025.06.07

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Am08_coffee.h"

void Assignment08()
{
	PRODUCT p;

	printf("��ǰ��? ");
	scanf("%s", &p.name);

	printf("����? ");
	scanf("%d", &p.price);

	printf("���? ");
	scanf("%d", &p.inventory);

	print_product(p);
}

int main()
{
	Assignment08();
	return 0;
}