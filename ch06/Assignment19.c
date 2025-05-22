/*���ϸ�: Core C Assignment19

*���� : ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ��� �ۼ��Ͻÿ�. ���� ��� graph(1200, 100);�� 100���� *�� �ϳ��� ����ϹǷ�
* *�� 12�� ����ϰ�, graph(1200, 10);�� 10���� *�� �ϳ��� ����ϹǷ� *�� 120�� ����Ѵ�. 0~9999������ ������ ���� 3���� �����ϰ� ������ 100���� 
* �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
*�ۼ��� : ������

*��¥ : 2025.05.22

*���� : v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void graph(int rnum) 
{
	int i;

	for (i = 0; i < rnum / 100; i++) 
	{
		printf("*");
	}
}

void body(void) 
{
	int i, rnum;
	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++) 
	{
		rnum = rand() % 10000;

		printf("%d:", rnum);
		graph(rnum);
		printf("\n");
	}

}

int main(void)
{
	body();
	return 0;
}