/*파일명: Core C Assignment09

*내용 : 햄버거 가게의 계산서 프로그램을 작성하시오. 햄버거는 4000원, 콜라는 1500원, 감자튀김은 2000원, 세 가지를 세트로
* 주문하면 6500원이라고 하자. 햄버거, 콜라, 감자튀김의 수량을 입력받아서 최대한 세트로 구성하고 나머지는 단품으로
* 계산하도록 한다. 예를 들어 햄버거 2, 콜라 1, 감자튀김 3을 주문하면 계산은 세트1, 햄버거 1, 감자튀김 2로 해야한다. 

*작성자 : 정찬민

*날짜 : 2025.04.21

*버전 : v1.0
*/

#define hamburger_ehs 4000
#define gam_ehs 2000
#define coke_ehs 1500
#define set_ehs 6500
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ham(void)
{
	int hamburger = 0, gam = 0, coke = 0, set = 0;
	int total = 0;
	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");
	
	printf("햄버거 개수? ");
	scanf("%d", &hamburger);
	printf("감자튀김 개수? ");
	scanf("%d", &gam);
	printf("콜라 개수? ");
	scanf("%d", &coke);

	printf("\n");

	while (1)
	{
		if (hamburger > 0 && gam > 0 && coke > 0)
		{
			hamburger--;
			gam--;
			coke--;

			set++;
		}

		else 
		{
			total += set * set_ehs;
			total += hamburger * hamburger_ehs;
			total += gam * gam_ehs;
			total += coke * coke_ehs;
			break;
		}
	}

	printf("상품명	     단가  수량    금액\n");
	printf("세트         %4d   %2d   %6d\n", set_ehs, set, set * set_ehs);
	printf("햄버거       %4d   %2d   %6d\n", hamburger_ehs, hamburger, hamburger * hamburger_ehs);
	printf("감자튀김     %4d   %2d   %6d\n", gam_ehs, gam, gam * gam_ehs);
	printf("콜라         %4d   %2d   %6d\n", coke_ehs, coke, coke * coke_ehs);
	printf("--------------------------------\n");
	printf("합계                   %7d원\n", total);

	return 0;
}

int main(void)
{
	ham();
	return 0;
}