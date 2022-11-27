#include <stdio.h>
#define arr_size (10)
int main(void) {

    int a_arr[arr_size];
    int b_arr[arr_size] = {0,1,2,3,4,5,6,7,8,9};
    
    int i = 0;
    
    // 다음과 같이 작성하면 부작용 발생
    // b[0] 후 i증가 => i = 1 => a[1]에 a[0]할당 => 반복
    while (i < arr_size) {
        a_arr[i] = b_arr[i++];
    }
    
    for (int j = 0; j < arr_size; j++){
        printf("%d ", a_arr[j]);
    }
    
    // C99의 지정초기자 활용
    // 순서 관계 없음
    int a[15] = {[2] = 29, [9] = 7, [14] = 48};
    // int a[15] = {[14] = 48, [9] = 7, [2] = 29};
    // b 배열의 길이는 자동적으로 24가 된다
    int b[] = {[23] = 2, [14] = 22, [20] = 100};

    // 위의 초기자는 배열의 첫 세 개의 원소들의 값 5, 1, 9
    // 4번 원소는 3, 4번 원소 이후 2개의 값은 7, 2
    // 8번 원소는 6
    // 지정해주지 않은 원소는 기본값인 0을 가지게 될 것
    int c[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};

    // sizeof를 통해 배열 초기화
    // 배열의 크기가 달라지더라도 Loop 건드릴 필요가 없다
    int arr[10];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        a[i] = 0;
    }

    return 0;
}