/*���ϸ�: Core C Assignment06

*���� : ������ ���� �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� choose_menu �Լ��� �ۼ��Ͻÿ�. �߸��� ��ȣ�� �����ϸ� �ùٸ�
* ��ȣ�� ������ ������ ��� �޴��� ����ϰ� �ٽ� ���ù޾ƾ��Ѵ�. ��, choose_menu �Լ��� �ݵ�� 0~3������ ���� �����ؾ� �Ѵ�. choose_menu ��
* ���ϰ��� ���� � �޴��� ���õǾ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*�ۼ��� : ������

*��¥ : 2025.05.22

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu()
{
	int num;
	while (1)
	{
		printf("[1.���� ����  2.���� ����  3.�μ�  0.����] ����? ");
		scanf("%d", &num);

		if (num >= 0 && num <= 3)
		{
			return num;
		}
		printf("�߸��� �����Դϴ�. �ٽ� �Է��ϼ���.\n");
	}
}

void Am06()
{
	int choose;

	do
	{
		choose = choose_menu();

		if (choose == 1)
		{
			printf("���� ���⸦ �����մϴ�.\n");
		}
		else if (choose == 2)
		{
			printf("���� ������ �����մϴ�.\n");
		}
		else if (choose == 3)
		{
			printf("�μ⸦ �����մϴ�.\n");
		}
	} while (choose != 0);

	printf("���α׷��� �����մϴ�.");
}

int main()
{
	Am06();
	return 0;
}