#include <stdio.h>
#include <stdbool.h>

#define BOOL int

int main(void){
    // C99방식
    _Bool flag_1;
    bool flag_2;

    // C89방식
    BOOL flag_3;
    flag_3 = 1;

    flag_1 = 0;
    flag_2 = false;
    printf("_Bool : %d, bool : %d\n", flag_1, flag_2);
    printf("BOOL : %d", flag_3);
}