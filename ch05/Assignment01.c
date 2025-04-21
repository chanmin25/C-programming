/*파일명: Core C Assignment01

*내용 : 점의 좌표 (x, y)를 입력받아 스크린 사으이 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오. 스크린 상의 선택
* 영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점에 의해서 결정된다.

*작성자 : 정찬민

*날짜 : 2025.04.21

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rjatk(void)
{
	int left, right, top, bottom, x, y;

	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &top);

	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &right, &bottom);

	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (left < x < right && top < y < bottom)
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	}

	else
	{
		printf("직사각형 모양의 선택 영역 내의 점이 아닙니다.");
	}
		
	return 0;
}

int main(void)
{
	rjatk();
	return 0;
}