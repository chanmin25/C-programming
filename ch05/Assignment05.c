/*파일명: Core C Assignemnt05

*내용 : 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램을 작성하시오. "27 C" 또는 "27 F"
* 처럼 온도를 입력받을 때 섭씨인지 화씨인지 구분할 수 있는 문자를 함꼐 입력받는다. 함께 입력된 문자가 'C'면 섭씨 온도이므로
* 화씨 온도를 구해서 출력하고, 입력된 문자가 'F'면 화씨 온도이므로 섭씨 온도를 구해서 출력한다.

*작성자 : 정찬민

*날짜 : 2025.04.21

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dhseh(void)
{
	double dhs;
	char eh;

	printf("온도? ");
	scanf("%lf %c", &dhs, &eh);

	if (eh == 'C')
	{
		printf("%.2lf C ==> %.2lf F", dhs, (dhs * (9.0 / 5.0)) + 32);
	}

	if (eh == 'F')
	{
		printf("%.2lf F ==> %.2lf C", dhs, (dhs - 32.0) * (5.0 / 9.0));
	}

	return 0;
}


int main(void)
{
	dhseh();
	return 0;
}