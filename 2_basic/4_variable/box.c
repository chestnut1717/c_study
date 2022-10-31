#include <stdio.h>

int main(void){
    int height;
    int width;
    int depth;

    width = 10;
    height = 5;
    depth = 7;
    
    int volume = width * height * depth;
    // 운송회사에서는 올림을 해야 하는데, c에서는 나누기하면 무조건 내려버림
    int dimensinalWeight = (volume + 165) / 166;



    printf("Original volume : %d\n", volume);
    printf("Dimensional Weight : %d\n", dimensinalWeight);


    return 0;
}