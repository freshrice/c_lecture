#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void print_binary(int a) {
    if (a == 0) {
        return;
    }
    print_binary(a / 2);  // �� ���� ��� ȣ��
    printf("%d", a % 2);  // �������� ���
}

int main() {
    int jung;
    printf("please enter a number: ");
    scanf("%d", &jung);

    if (jung == 0) {
        printf("0");
    }
    else {
        print_binary(jung);  // ��� ȣ��� 2���� ���
    }

    printf("\n");
    return 0;
}
