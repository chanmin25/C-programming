/*파일명: Core C Assignment13

*내용 : 직사각형 정보를 나타내는 RECT 구조체를 정의하시오. 직사각형은 최하단점과 우상단점으로 구성되며 점의 좌표는 POINT 구조체를 
* 이용해서 나타낸다. 직사각형 정보를 출력하는 print_rect 함수를 정의 하고, RECT 구조체 변수를 선언해서 직사각형 정보를 입력받고 출력하는 
* 프로그램을 작성하시오.
*작성자 : 정찬민

*날짜 : 2025.06.07

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Am13_square.h"

void Assignment13()
{
	RECT rect;

	printf("직사각형의 좌하단점(x,y)? ");
	scanf("%d %d", &rect.top.x, &rect.top.y);

	printf("직사각형의 우상단점(x,y)? ");
	scanf("%d %d", &rect.bottom.x, &rect.bottom.y);

	print_rect(rect);
}

int main()
{
	Assignment13();
	return 0;
}