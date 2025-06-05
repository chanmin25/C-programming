#pragma once

#define LOGIN_H

#define MAX_LEN 21

//구조체 정의
struct LOGIN
{
	char ID[MAX_LEN];
	char PW[MAX_LEN];
};

//함수 선언
void getLogin(struct LOGIN* user);
void printLogin(const struct LOGIN* user);


