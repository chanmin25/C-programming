#pragma once

#define LOGIN_H

#define ID_LEN 20
#define PW_LEN 20
#define USER 5

typedef struct
{
	char id[ID_LEN];
	char password[PW_LEN];
} LOGIN;

int login(LOGIN users[], const char* input_id, const char* input_pw);

