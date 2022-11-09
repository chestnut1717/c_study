#include <stdio.h>

int main(void){

    int size;
    int i = 1;
    printf("본 프로그램은 제곱수 표를 출력합니다.\n");
    printf("본 프로그램의 크기를 결정해주세요: ");
    scanf("%d", &size);

    while (i < size + 1){
        printf("%10d %10d\n", i, i*i);
        ++i;
    }
    return 0;
}