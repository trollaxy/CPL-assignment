//
// Created by 28057 on 2023/11/26.
//
#include <stdio.h>

int main() {
    int num;
    float *f = &num;
    scanf("%x", &num);
    printf("%d\n", num);
    printf("%u\n", num);
    printf("%.6f\n", *f);
    printf("%.3g\n", *f);
    return 0;
}