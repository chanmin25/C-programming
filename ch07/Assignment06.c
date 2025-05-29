/*파일명: Core C Assignment06

*내용 : 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오. 싱수형 배열의 초기값은 마음대로 정하시오..
*작성자 : 정찬민

*날짜 : 2025.05.29

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am06(void)
{
    int i;
    double arr[10] = { 2.4, 7.2, 2.6, 4.9, 1.2, 8.6, 6.7, 4.6, 3.7, 1.8 };

    printf("배열:");
    for (i = 0; i < 10; i++)
    {
        printf(" %.1lf", arr[i]);
    }
    printf("\n역순:");
    for (i = 9; i >= 0; i--)
    {
        printf(" %.1lf", arr[i]);
    }
}

int main(void)
{
    Am06();
    return 0;
}