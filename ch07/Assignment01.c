/*파일명: Core C Assignment01

*내용 : 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다. 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
* 첫 번쨰 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
*작성자 : 정찬민

*날짜 : 2025.05.25

*버전 : v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment01() 
{
    int arr[10];         // 크기가 10인 정수형 배열
    int first, diff;     // 첫 번째 항과 공차
    int i;

    // 사용자 입력
    printf("첫 번째 항을 입력하세요: ");
    scanf("%d", &first);

    printf("공차를 입력하세요: ");
    scanf("%d", &diff);

    // 등차수열로 배열 채우기
    for (i = 0; i < 10; i++) 
    {
        arr[i] = first + i * diff;
    }

    // 결과 출력
    printf("등차수열 배열: ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


int main()
{
    Assignment01();
    return 0;
}