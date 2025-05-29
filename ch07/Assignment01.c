/*파일명: Core C Assignment01

*내용 : 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다. 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
* 첫 번쨰 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
*작성자 : 정찬민

*날짜 : 2025.05.25

*버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArray(int arr[], int size);
void fillCD(int arr[], int size, int start, int diff);
int Assignment01(void);

int main(void)
{
    Assignment01();
    return 0;
}

int Assignment01(void)
{
    int result[10] = { 0 };
    int start = 0;
    int diff = 0;

    printf("초기값 등차 입력하세요: ");
    scanf("%d %d", &start, &diff);

    fillCD(result, 10, start, diff);

    printf("등차수열: ");
    printArray(result, 10);

    return 0;
}

void printArray(int arr[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void fillCD(int arr[], int size, int start, int diff)
{
    arr[0] = start;
    for (int i = 1; i < size; i++)
    {
        arr[i] = arr[i - 1] + diff;
    }
}