#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Am01_login.h"

//���̵�� �н����� �Է�
void getLogin(struct LOGIN *user)
{
	printf("ID? ");
	scanf("%20s", user->ID);

	printf("Password? ");
	scanf("%20s", user->PW);
}

//���� ���(��й�ȣ�� *�� ǥ��)
void printLogin(const struct LOGIN *user)
{
	printf("\n[�α��� ���� ���]\n");
	printf("ID: %s\n", user->ID);
	printf("PW: ");
	for (int i = 0; i < strlen(user->PW); i++)
	{
		printf("*");
	}
	printf("\n");
}