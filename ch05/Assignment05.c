/*���ϸ�: Core C Assignemnt05

*���� : �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�. "27 C" �Ǵ� "27 F"
* ó�� �µ��� �Է¹��� �� �������� ȭ������ ������ �� �ִ� ���ڸ� �Բ� �Է¹޴´�. �Բ� �Էµ� ���ڰ� 'C'�� ���� �µ��̹Ƿ�
* ȭ�� �µ��� ���ؼ� ����ϰ�, �Էµ� ���ڰ� 'F'�� ȭ�� �µ��̹Ƿ� ���� �µ��� ���ؼ� ����Ѵ�.

*�ۼ��� : ������

*��¥ : 2025.04.21

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dhseh(void)
{
	double dhs;
	char eh;

	printf("�µ�? ");
	scanf("%lf %c", &dhs, &eh);

	if (eh == 'C')
	{
		printf("%.2lf C ==> %.2lf F", dhs, (dhs * (9.0 / 5.0)) + 32);
	}

	if (eh == 'F')
	{
		printf("%.2lf F ==> %.2lf C", dhs, (dhs - 32.0) * (5.0 / 9.0));
	}

	return 0;
}


int main(void)
{
	dhseh();
	return 0;
}