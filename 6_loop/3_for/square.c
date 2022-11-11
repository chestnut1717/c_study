#include <stdio.h>

int main(void){

    int size;
    int i;
    printf("본 프로그램은 제곱수 표를 출력합니다.\n");
    printf("본 프로그램의 크기를 결정해주세요: ");
    scanf("%d", &size);
    for (i = 1; i <= size; ++i) {
        printf("%10d %10d\n", i, i*i);
    }

    return 0;
}