/*파일명: Core C Assignment04

*내용 : 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 원소를 찾아서 인덱스와 값을 함께
* 출력하는 프로그램을 작성하시오. 배열이 초기값은 마음대로 정하시오.
*작성자 : 정찬민

*날짜 : 2025.05.29

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assign04(void)
{
    int arr[10] = { 14, 76, 43, 29, 50, 73, 62, 89, 81, 58 };
    int max, min, max_idx, min_idx;
    int i;

    max = arr[0];   max_idx = 0;
    min = arr[0];   min_idx = 0;
    printf("배열:");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", arr[i]);
        if (max < arr[i])   max = arr[i], max_idx = i;
        if (min > arr[i])   min = arr[i], min_idx = i;
    }
    printf("\n최댓값: 인덱스=%d 값=%d", max_idx, max);
    printf("\n최솟값: 인덱스=%d 값=%d", min_idx, min);
}

int main(void)
{
    Assign04();
    return 0;
}