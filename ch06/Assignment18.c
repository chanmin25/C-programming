/*���ϸ�: Core C Assignment18

*���� : ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��Ͻÿ�. 0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ 
* ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*�ۼ��� : ������

*��¥ : 2025.05.22

*���� : v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void divisors(int num)
{
	int i , cnt = 0;
	printf("%d�� ���: ", num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cnt++;
			printf("%d ", i);
		}
	}
	printf("=> �� %d��\n", cnt);
}

void body(void)
{
	int i, j, cnt = 0;

	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++)
	{
		int num = rand() % 1000;
		divisors(num);
	}

}

int main(void)
{
	body();
	return 0;
}