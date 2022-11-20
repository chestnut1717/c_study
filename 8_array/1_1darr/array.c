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
    

    return 0;
}