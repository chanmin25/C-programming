/*���ϸ�: Core C Assignment12

*���� : ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �ѵ�. ������ ������ ���� �¼��� ��� 10����� ����. ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�. 
* ������ ������ �� �¼��� ���¸� ����Ѵ�. 0�̸� ���� ����, X�� ���� �Ұ��� �ǹ��Ѵ�. �� �̻� ������ �� ������ ���α׷��� �����Ѵ�.
*�ۼ��� : ������

*��¥ : 2025.05.29

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am12(void) {
	int i, sit, pay;
	int arr[10] = { 0 };

	while (arr[9] == 0) 
	{
		printf("���� �¼�: [");
		for (i = 0; i < 10; i++) 
		{
			if (arr[i] == 0) 
			{
				printf(" O");
			}
			else 
			{
				printf(" X");
			}
		}
		printf(" ]\n������ �¼���? ");
		scanf("%d", &sit);
		for (i = 0; i < 10; i++) 
		{
			if (arr[i] == 0 && sit > 0) 
			{
				arr[i] = 1;
				printf("%d ", i + 1);
				sit--;
			}
		}
		printf("�� �¼��� �����߽��ϴ�.\n");
	}
}

int main(void)
{
	Am12();
	return 0;
}