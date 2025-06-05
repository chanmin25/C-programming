#include <string.h>
#include "Am03_arr.h"

int login(LOGIN users[], const char* input_id, const char* input_pw)
{
	for (int i = 0; i < USER; i++)
	{
		if (strcmp(users[i].id, input_id) == 0)
		{
			if (strcmp(users[i].password, input_pw) == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return -1;
}
