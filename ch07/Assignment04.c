/*���ϸ�: Core C Assignment04

*���� : Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ�
* ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
*�ۼ��� : ������

*��¥ : 2025.05.29

*���� : v1.0
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
    printf("�迭:");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", arr[i]);
        if (max < arr[i])   max = arr[i], max_idx = i;
        if (min > arr[i])   min = arr[i], min_idx = i;
    }
    printf("\n�ִ�: �ε���=%d ��=%d", max_idx, max);
    printf("\n�ּڰ�: �ε���=%d ��=%d", min_idx, min);
}

int main(void)
{
    Assign04();
    return 0;
}