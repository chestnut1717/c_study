#include <stdio.h>

int main(void){

    int i0;

    int i1;
    int i2;
    int i3;
    int i4;
    int i5;

    int i6;
    int i7;
    int i8;
    int i9;
    int i10;

    int odd_sum;
    int even_sum;
    int check;

    printf("첫번째 (한자리수) 숫자를 입력해주세요: ");
    scanf("%d", &i0);

    /*여기서 중요한 게, 한 글자씩 scan해야 하므로  %1d 변환규격 사용해야*/
    printf("첫번째 다섯자리 숫자를 입력해주세요: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("두번째 다섯자리 숫자를 입력해주세요: ");
    scanf("%1d%1d%1d%1d%1d", &i6, &i7, &i8, &i9, &i10);
    
    /* 홀수 번째 숫자 더함 */
    odd_sum = i0 + i2 + i4 + i6 + i8 + i10;
    even_sum = i1 + i3 + i5 + i7 + i9;
    check = 9 - ( ( ( odd_sum * 3 + even_sum ) - 1 ) % 10 );
    printf("확인자리수 : %d\n", check);

    return 0;
}