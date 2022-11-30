#define N (10)

#include <stdio.h>

int main(void){

    // 2차원 행렬 선언
    int m[5][9];

    // 단위행렬 만들기
    double ident[N][N];
    int row = 0;
    int col = 0;

    for (row = 0; row < N; row++){
        for (col = 0; col < N; col++){
            if (row == col){
                ident[row][col] = 1.0;
            } else {
                ident[row][col] = 0.0;
            }
        }
    }

    // 출력
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%f ", ident[i][j]);
        }
        printf("\n");
    }


    return 0;
}