//
// Created by 28057 on 2023/12/27.
//
#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b);
int main() {
    int n = 0, q = 0;
    int num = 0;
    int *x;
    int a[1000005] = {0};
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int m = 0; m < q; m++) {
        scanf("%d", &num);
        x = bsearch(&num, a, n, sizeof *a, comp);
        if (x == NULL) { printf("-1\n"); }
        else {
            printf("%d\n", x - a);
        }
    }
    return 0;
}
int comp(const void *a, const void *b) {
    int *left = (int *) a;
    int *right = (int *) b;
    return (*left > *right) - (*left < *right);
}