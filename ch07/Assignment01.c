/*���ϸ�: Core C Assignment01

*���� : ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�. ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
* ù ���� ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*�ۼ��� : ������

*��¥ : 2025.05.25

*���� : v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment01() 
{
    int arr[10];         // ũ�Ⱑ 10�� ������ �迭
    int first, diff;     // ù ��° �װ� ����
    int i;

    // ����� �Է�
    printf("ù ��° ���� �Է��ϼ���: ");
    scanf("%d", &first);

    printf("������ �Է��ϼ���: ");
    scanf("%d", &diff);

    // ���������� �迭 ä���
    for (i = 0; i < 10; i++) 
    {
        arr[i] = first + i * diff;
    }

    // ��� ���
    printf("�������� �迭: ");
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