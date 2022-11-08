#include <stdio.h>

int main(void){
    
    int size;
    float commision;

    printf("Enter value of trade: ");
    scanf("%d", &size);

    if (size < 2500){
        commision = 30.0f + size * 0.017f;
    }
    else if (size < 6250)
    {
        commision = 56.0f + size * 0.0066f;
    }
    else if (size < 20000)
    {
        commision = 76.0 + size * 0.0034f;
    }
    else if (size < 50000)
    {
        commision = 100.0f + size * 0.0022f;
    }
    else if (size <= 500000)
    {
        commision = 155.0f + size * 0.0011f;
    }
    else{
        commision = 255.0f + size * 0.0009f;
    }

    // 최소 수수료
    if (commision < 39.00f){
        commision = 39.00f;
    }
    printf("Commision: $%.2f\n", commision);


    return 0;
}