#include <stdio.h>

int main(void){
    int grade = 2;
    
    switch (grade){
    case 4:
        printf("훌륭해요");
        break;
    case 3:
        printf("좋아요!");
        break;
    case 2:
        printf("평균이네요!");
        // 중괄호 안 써도 작동한다
        printf("dfaf");
        break;
    case 1:
        printf("좋지 않아요!");
        break;
    case 0:
        printf("좀 더 노력하세요!");
        break;
    default:
        printf("잘못된 학점입니다!");
        break;
    }

    switch (grade){
    case 4:
        /* intentional fallthrough*/
    case 3:
        /* intentional fallthrough*/
    case 2:
        /* intentional fallthrough*/
    case 1:
        printf("좋지 않아요!");
        break;
    case 0:
        printf("좀 더 노력하세요!");
        break;
    default:
        printf("잘못된 학점입니다!");
        break;
    }

    return 0;
}