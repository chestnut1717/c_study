#include <stdio.h>

int main(void){
    long num;
    long summation = 0;
    printf("%ld", num);
    printf("This program sums a series of integers. Enter integers (0 to terminate) : ");
    scanf("%ld", &num);

    while (num != 0) {
        summation += num;
        scanf("%ld", &num);
    }

    printf("The sum is: %ld", summation);

    return 0;
}