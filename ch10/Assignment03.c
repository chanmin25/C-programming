/*���ϸ�: Core C Assignment03

*���� : LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�. ���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� 
* �н������ ��ϵ� �н����带 ���ؼ� ������ "�α��� ����" �̶�� ����Ѵ�. LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������
* �ʱ�ȭ �ؼ� ����Ѵ�.
*�ۼ��� : ������

*��¥ : 2025.06.05

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Am03_arr.h"

void Assignment03()
{
	LOGIN user[USER] = {
		{"qwer", "1234"},
		{"asdf", "3456"},
		{"zxcv", "5678"},
		{"yuio", "7891"},
		{"hjkl", "9123"}
	};

	char input_id[ID_LEN];
	char input_pw[PW_LEN];

	printf("ID: ");
	scanf("%s", input_id);

	printf("PW: ");
	scanf("%s", input_pw);

	//�α��� �õ�
	int result = login(user, input_id, input_pw);

	if (result == 1)
	{
		printf("�α��� �����߾�!!");
	}
	else if (result == 0)
	{
		printf("�н����尡 Ʋ�Ƚ��ϴ٤̤�");
	}
	else
	{
		printf("�������� �ʴ� ���̵� �Դϴ٤̤�\n");
	}
}

int main()
{
	Assignment03();
	return 0;
}