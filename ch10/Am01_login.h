#pragma once

#define LOGIN_H

#define MAX_LEN 21

//����ü ����
struct LOGIN
{
	char ID[MAX_LEN];
	char PW[MAX_LEN];
};

//�Լ� ����
void getLogin(struct LOGIN* user);
void printLogin(const struct LOGIN* user);


