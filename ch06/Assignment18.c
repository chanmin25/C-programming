/*파일명: Core C Assignment18

*내용 : 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오. 0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 
* 약수를 출력하는 프로그램을 작성하시오.
*작성자 : 정찬민

*날짜 : 2025.05.22

*버전 : v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void divisors(int num)
{
	int i , cnt = 0;
	printf("%d의 약수: ", num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cnt++;
			printf("%d ", i);
		}
	}
	printf("=> 총 %d개\n", cnt);
}

void body(void)
{
	int i, j, cnt = 0;

	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++)
	{
		int num = rand() % 1000;
		divisors(num);
	}

}

int main(void)
{
	body();
	return 0;
}