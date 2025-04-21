/*���ϸ�: Core C Assignment08

*���� : ��Ʈ ������ �����ϴ� ���⸦ ���α׷��Ͻÿ�. &�� ��Ʈ AND, |�� ��Ʈ OR, ^�� ��Ʈ XOR ������ ó���Ѵ�. 
* "0xAB & 0xCC"ó�� ������� �Է��ؼ� ���� ����� ���Ѵ�. ��Ʈ �����̹Ƿ� ������� �Է¹��� �� 10����, 8����, 16������
* ����� �� �ְ� �ϰ�, ������ ����� 16������ ����Ѵ�.

*�ۼ��� : ������

*��¥ : 2025.04.21

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bit(void)
{
	unsigned int x, y, result = 0;
	char ch;

	printf("��Ʈ �����? ");
	scanf("%x %c %x", &x, &ch, &y);

	if (ch == '&')
	{
		result = x & y;
	}

	else if (ch == '|')
	{
		result = x | y;
	}

	else if (ch == '^')
	{
		result = x ^ y;
	}
	
	printf("%x %c %x = %8x", x, ch, y, result);

	return 0;
}

int main(void)
{
	bit();
	return 0;
}