#include <stdio.h>

int main(void){

    int num;
    int numdigits = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &num);

    /* num이 0일때, 그냥 while을 쓰면 바로 종료된다 */
    do{
        num /= 10;
        ++numdigits;;
    } while(num > 0);

    printf("The number has %d digit(s)", numdigits);

    return 0;
}