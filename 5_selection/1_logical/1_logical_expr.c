#include <stdio.h>

int main(void){
    int i = -3;
    int j = -2;
    int k = -1;

    // 두 수식은 엄연히 다른 수식이다.
    // 왜냐면 좌항연산자이기 때문에 (i < j) < k 방식으로 작동함
    printf("%d\n", i < j < k);
    printf("%d\n", i < j && j < k);

    // 논리연산자
    int expr1 = 0;
    int expr2 = 1;
    int expr3 = 2;
    printf("%d, %d\n", !expr1, !expr3);
    printf("%d\n", expr1 && expr2);
    printf("%d\n", expr2 || expr3);

    int a = 0;
    int b = 3;

    printf("a: %d, b: %d\n", a, b);
    printf("a > 0 && ++b > 0: %d\n", a > 0 && ++b > 0);
    
    // 앞 단락이 바로 0이 나와버리므로 뒷 단락은 실행되지 않음
    printf("a: %d, b: %d\n", a, b);




}