#include <stdio.h>

/* 문자열 길이 알아내는 코드 */
int main(void){
    
    int cnt = 0;
    char ch;
    
    printf("Enter a message : ");
    while ( (ch = getchar() ) != '\n') {
        ++cnt;
    }

    printf("Your message was %d character(s) long", cnt);


    return 0;
}