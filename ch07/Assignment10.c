/*파일명: Core C Assignment10

*내용 : 3X3 행렬의 합을 구하는 프로그램을 작성하시오. 행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.
*작성자 : 정찬민

*날짜 : 2025.05.29

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am10(void)
{
    int arr[2][9];
    int i, x_hag = 0, y_hag = 9;

    printf("x 행렬: \n");
    for (i = 0; i < 9; i++)
    {
        x_hag += 10;
        arr[0][i] = x_hag;

        printf(" %2d", arr[0][i]);
        if (i % 3 == 2)
            printf("\n");
    }
    printf("\ny 행렬:\n");
    for (i = 0; i < 9; i++)
    {
        arr[1][i] = y_hag;
        y_hag--;

        printf(" %2d", arr[1][i]);
        if (i % 3 == 2)
            printf("\n");
    }
    printf("\nx + y행렬:\n");
    for (i = 0; i < 9; i++)
    {
        printf(" %2d", arr[0][i] + arr[1][i]);
        if (i % 3 == 2)
        {
            printf("\n");
        }
    }
}

int main(void)
{
    Am10();
    return 0;
}