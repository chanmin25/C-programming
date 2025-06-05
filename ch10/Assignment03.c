/*파일명: Core C Assignment03

*내용 : LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오. 아이디를 입력받아 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 
* 패스워드와 등록된 패스워드를 비교해서 같으면 "로그인 성공" 이라고 출력한다. LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로
* 초기화 해서 사용한다.
*작성자 : 정찬민

*날짜 : 2025.06.05

*버전 : v1.0
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

	//로그인 시도
	int result = login(user, input_id, input_pw);

	if (result == 1)
	{
		printf("로그인 성공했어!!");
	}
	else if (result == 0)
	{
		printf("패스워드가 틀렸습니다ㅜㅜ");
	}
	else
	{
		printf("존재하지 않는 아이디 입니다ㅜㅜ\n");
	}
}

int main()
{
	Assignment03();
	return 0;
}