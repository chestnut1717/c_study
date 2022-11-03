#include <stdio.h>

int main(void) {

    int a = 9;
    float b = -7.0f;
    int c = -7;

    printf("%d / %f = %f\n", a, b, a/b);
    printf("%d / %d = %d", a, c, a/c);

    return 0;
}