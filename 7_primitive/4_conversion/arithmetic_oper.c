#include <stdio.h>

int main(void){
    char c;
    short int s;
    int i;
    unsigned int u;
    long int l;
    unsigned long int ul;
    float f;
    double d;
    long double ld;

    i = i + c; // int로 변환
    i = i + s; // int로 변환
    u = u + i; // 무부호 정수로 변환
    l = l + u; //long
    ul = ul + l // unsigned ul
    f = f + ul // ul은 float으로
    d = d + f //double 형으로
    ld = ld + d // long double형으로

    return 0;
}