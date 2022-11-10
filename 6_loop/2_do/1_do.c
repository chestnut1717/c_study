#include <stdio.h>

int main(void){
    int i = 0;

    do{
        printf("T빼기 %d, 세는 중\n", i);
        --i;
    } while (i > 0);

    return 0;
}