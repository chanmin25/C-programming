/*���ϸ�: Core C Assignment06

*���� : ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�. �̼��� �迭�� �ʱⰪ�� ������� ���Ͻÿ�..
*�ۼ��� : ������

*��¥ : 2025.05.29

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am06(void)
{
    int i;
    double arr[10] = { 2.4, 7.2, 2.6, 4.9, 1.2, 8.6, 6.7, 4.6, 3.7, 1.8 };

    printf("�迭:");
    for (i = 0; i < 10; i++)
    {
        printf(" %.1lf", arr[i]);
    }
    printf("\n����:");
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