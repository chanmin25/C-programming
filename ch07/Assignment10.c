/*���ϸ�: Core C Assignment10

*���� : 3X3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��ķ� ���� 2���� �迭�� ������� �ʱ�ȭ�ص� �ȴ�.
*�ۼ��� : ������

*��¥ : 2025.05.29

*���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Am10(void)
{
    int arr[2][9];
    int i, x_hag = 0, y_hag = 9;

    printf("x ���: \n");
    for (i = 0; i < 9; i++)
    {
        x_hag += 10;
        arr[0][i] = x_hag;

        printf(" %2d", arr[0][i]);
        if (i % 3 == 2)
            printf("\n");
    }
    printf("\ny ���:\n");
    for (i = 0; i < 9; i++)
    {
        arr[1][i] = y_hag;
        y_hag--;

        printf(" %2d", arr[1][i]);
        if (i % 3 == 2)
            printf("\n");
    }
    printf("\nx + y���:\n");
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