#include <stdio.h>

int main(void){

    // 서식문자열과 표현식
    int i;
    int j;
    float x;
    float y;

    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    // 실제로는 작동
    // printf("%d %d\n", i);
    // printf("%d\n", i, j);
    // printf("%f %d\n", i, x);

    printf("|%10.3f|, |%10.3e|, |%10.3g|", x, x, x);

    // 확장 비트열
    printf("\a hello \n my name is park \t seon hong\b");





}