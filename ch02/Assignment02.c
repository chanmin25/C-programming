/*파일명: Assignment02.c

*내용 : 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수로, 학점은 실수로 입력받는다.

*작성자 : 정찬민

*날짜 : 2025.3.20

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am02()
{
	int num;
	double score;

	printf("번호? ");
	scanf("%d", &num);

	printf("학점? ");
	scanf("%lf", &score);

	printf("%d번 학생의 학점은 %.1lf입니다.", num, score);
}

int main()
{
	Am02();
	return 0;
}