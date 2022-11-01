#include <stdio.h>

int main(void){

    // 변수 선언
    int height;
    int length;
    int width;
    int volume;
    int weight;

    // scanf를 통해 사용자 입력
    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter weight of box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;

}