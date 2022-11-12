#include <stdio.h>

int main()
{
    int num;
    int d;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num);
    
    for (d = 2; d < num; ++d) {
        if (num % d == 0)
            goto done;
    }
    done: 
        if (d < num){
            printf("%d는 소수가 아닙니다\n", num);
        } else {
            printf("%d는 소수입니다\n", num);
        }

}