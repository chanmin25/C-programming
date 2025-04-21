/*���ϸ�: Core C Assignment09

*���� : �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�. �ܹ��Ŵ� 4000��, �ݶ�� 1500��, ����Ƣ���� 2000��, �� ������ ��Ʈ��
* �ֹ��ϸ� 6500���̶�� ����. �ܹ���, �ݶ�, ����Ƣ���� ������ �Է¹޾Ƽ� �ִ��� ��Ʈ�� �����ϰ� �������� ��ǰ����
* ����ϵ��� �Ѵ�. ���� ��� �ܹ��� 2, �ݶ� 1, ����Ƣ�� 3�� �ֹ��ϸ� ����� ��Ʈ1, �ܹ��� 1, ����Ƣ�� 2�� �ؾ��Ѵ�. 

*�ۼ��� : ������

*��¥ : 2025.04.21

*���� : v1.0
*/

#define hamburger_ehs 4000
#define gam_ehs 2000
#define coke_ehs 1500
#define set_ehs 6500
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ham(void)
{
	int hamburger = 0, gam = 0, coke = 0, set = 0;
	int total = 0;
	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");
	
	printf("�ܹ��� ����? ");
	scanf("%d", &hamburger);
	printf("����Ƣ�� ����? ");
	scanf("%d", &gam);
	printf("�ݶ� ����? ");
	scanf("%d", &coke);

	printf("\n");

	while (1)
	{
		if (hamburger > 0 && gam > 0 && coke > 0)
		{
			hamburger--;
			gam--;
			coke--;

			set++;
		}

		else 
		{
			total += set * set_ehs;
			total += hamburger * hamburger_ehs;
			total += gam * gam_ehs;
			total += coke * coke_ehs;
			break;
		}
	}

	printf("��ǰ��	     �ܰ�  ����    �ݾ�\n");
	printf("��Ʈ         %4d   %2d   %6d\n", set_ehs, set, set * set_ehs);
	printf("�ܹ���       %4d   %2d   %6d\n", hamburger_ehs, hamburger, hamburger * hamburger_ehs);
	printf("����Ƣ��     %4d   %2d   %6d\n", gam_ehs, gam, gam * gam_ehs);
	printf("�ݶ�         %4d   %2d   %6d\n", coke_ehs, coke, coke * coke_ehs);
	printf("--------------------------------\n");
	printf("�հ�                   %7d��\n", total);

	return 0;
}

int main(void)
{
	ham();
	return 0;
}