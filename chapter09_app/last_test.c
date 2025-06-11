#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int test_strcpy();

int main()
{
	//printf("Hello, world\n");
	//test_strlen();
	//test_strcpy();
	test_string();
}

#define SIZE 128
int test_string()
{
	char in_str[SIZE] = "";
	char out_str[SIZE] = "";
	char* pContest = NULL;

	printf("Enter string: ");
	//gets_s(in_str, sizeof(in_str));

	//fgets(in_str, sizeof(in_str), stdin);

	// ���Ͽ��� �б� : 
	FILE* mycontact = fopen("C:\\Users\\jcm20\\OneDrive\\Desktop\\test1.txt", "r");
	if (mycontact == NULL)
	{
		printf("Failt to open file\n");
		return -1;
	}

	while (fgets(in_str, sizeof(in_str), mycontact) != NULL)
	{
		puts(in_str);

		char* ptoken = strtok_s(in_str, "|,", &pContest);
		if (ptoken != NULL) puts(ptoken);

		ptoken = strtok_s(NULL, "|,", &pContest);
		if (ptoken != NULL) puts(ptoken);

		ptoken = strtok_s(NULL, "|,", &pContest);
		if (ptoken != NULL) puts(ptoken);
	}
	fclose(mycontact);

	return 0;

}



#define STR_SIZE 128
int str_swap(char* str1, char* str2, int size);

int test_strcpy()
{
	char str1[STR_SIZE] = "";
	char str2[STR_SIZE] = "";

	printf("�� ���ڿ� �Է�: ");
	scanf_s("%s %s", str1, STR_SIZE, str2, STR_SIZE);
	printf("%s %s �� �ԷµǾ����ϴ�.", str1, str2);

	str_swap(str1, str2, STR_SIZE);
	printf("%s %s �� ��ȯ�Ǿ�����?", str1, str2);

	return 0;
}

// ��ȯ�� �� ���ڿ� ������ �� ��ȯ
int str_swap(char* str1, char* str2, int size)
{
	int result = 0;
	if (size <= 0 || str1 == NULL || str2 == NULL)
	{
		return 0;
	}

	char* temp = NULL;
	// void * malloc(int size);
	temp = (char*)malloc(sizeof(char) * size);
	// temp[0] = 'A';
	// char temp[size];
	if (temp == NULL)
	{
		return 0;
	}

	/*
	strncpy(temp, str1, size);
	strncpy(str1, str2, size);
	strncpy(str2, temp, size);
	*/

	strcpy_s(temp, size, str1);
	strcpy_s(str1, size, str2);
	strcpy_s(str2, size, temp);

	result = strlen(str1) + strlen(str2);

	free(temp);

	return result;
}




int test_strlen()
{
	char str1[] = "Hello";
	char name[] = "������";

	size_t len = strlen(str1);

	//printf("%s �� ����: %d\n", str1, strlen(str1));
	printf("%s �� ����: %d\n", str1, len);

	len = strlen("�ȳ��ϼ���");

	printf("%s �� ����: %d\n", name, strlen(name));

	len = strlen("");
	printf("%s �� ����: %d\n", "", strlen(""));
}