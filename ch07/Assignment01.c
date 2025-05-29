/*���ϸ�: Core C Assignment01

*���� : ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�. ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
* ù ���� ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*�ۼ��� : ������

*��¥ : 2025.05.25

*���� : v1.0
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

    printf("�ʱⰪ ���� �Է��ϼ���: ");
    scanf("%d %d", &start, &diff);

    fillCD(result, 10, start, diff);

    printf("��������: ");
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