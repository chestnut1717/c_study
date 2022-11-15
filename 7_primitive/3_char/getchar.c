#include <stdio.h>
#include <ctype.h>

int main(void){

    // getchar은 값을 입력 받으면 버퍼 저장한다음
    // getchar이 하나씩 호출될 때 마다 값을 다시 받음
    char ch1;
    ch1 = getchar();
    printf("%c", ch1);

    // 띄어쓰기가 나올 때까지 계속 입력받음
    char ch;

    while ( (ch = getchar()) != ' ') {
        putchar(ch);

    }
    printf("completed!");
}