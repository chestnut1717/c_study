#include <stdio.h>

#define false (0)
#define true (1)
#define N (10)

int main(void){

    int number;
    int digit_seen[N] = {false};
    int ndigit = 1;
    int exp_10 = 10;
    int digit;
    int condition = true;

    printf("Enter a number: ");
    scanf("%d", &number);

    // 자릿수 확인
    while (number / exp_10) {
        ndigit += 1;
        exp_10 *= 10;
    }
    printf("ndigits : %d\n", ndigit);

    // 각 자릿수 점검
    for (int i = 0; i < ndigit; i++){
        digit = number % 10;

        if (digit_seen[digit] == false) {
            digit_seen[digit] = true;
            number /= 10;
        } else {
            printf("Repeated digit\n");
            condition = false;
            break;
        }
        
    }
    
    if (condition == true) {
        printf("No repeated digit\n");
    }

    return 0;
}