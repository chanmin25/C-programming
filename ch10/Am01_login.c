#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Am01_login.h"

//아이디와 패스워드 입력
void getLogin(struct LOGIN *user)
{
	printf("ID? ");
	scanf("%20s", user->ID);

	printf("Password? ");
	scanf("%20s", user->PW);
}

//정보 출력(비밀번호는 *로 표시)
void printLogin(const struct LOGIN *user)
{
	printf("\n[로그인 정보 출력]\n");
	printf("ID: %s\n", user->ID);
	printf("PW: ");
	for (int i = 0; i < strlen(user->PW); i++)
	{
		printf("*");
	}
	printf("\n");
}