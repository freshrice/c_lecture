#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void print_binary(int a) {
    if (a == 0) {
        return;
    }
    print_binary(a / 2);  // 몫에 대해 재귀 호출
    printf("%d", a % 2);  // 나머지를 출력
}

int main() {
    int jung;
    printf("please enter a number: ");
    scanf("%d", &jung);

    if (jung == 0) {
        printf("0");
    }
    else {
        print_binary(jung);  // 재귀 호출로 2진수 출력
    }

    printf("\n");
    return 0;
}
