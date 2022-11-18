#include <stdio.h>

int main(void) {

    short s;
    int i;
    long l;
    double db;
    unsigned long ul;
    unsigned long long ull;
    
    printf("sizeof i: %lu\n", sizeof(i));
    printf("sizeof signed long: %lu\n", sizeof(l));
    printf("sizeof unsigned long: %lu\n", sizeof(ul));
    printf("sizeof unsigned long long: %zu\n", sizeof(ull));

    return 0;
}