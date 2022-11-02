#include <stdio.h>

/* scanf를 활용해 수 더하기 입력하는 것을 한 번에 할 수 있음(짝맞추기) */
int main(void){
    int denom1;
    int numer1;
    int denom2;
    int numer2;
    int result_denom;
    int result_numer;

    printf("분수 1을 입력하세요: ");
    scanf("%d/%d", &numer1, &denom1);
    printf("\n");

    printf("분수 2를 입력하세요: ");
    scanf("%d/%d", &numer2, &denom2);
    printf("\n");

    // numer1/denom1
    result_numer = denom2 * numer1 + denom1 * numer2;
    result_denom = denom1 * denom2;

    printf("두 분수의 합은 %d/%d 입니다.", result_numer, result_denom);

}