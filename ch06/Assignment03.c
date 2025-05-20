/*파일명: Core C Assignment03

*내용 : 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오. distance 함수를 이용해서 입력 받은 시작점부터 끝점 사이의 직선 거리를
* 구하는 프로그램을 작성하시오.
*작성자 : 정찬민

*날짜 : 2025.05.20.

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

double distance(int x1, int y1, int x2, int y2)
{
	int result = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

	return result;
}

void wlr(void)
{
	int x1, y1, x2, y2;

	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x1, &y1);

	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) 직선의 길이: %.6f", x1, y1, x2, y2, distance(x1, y1, x2, y2));
}

int main(void)
{
	wlr();
	return 0;
}