//
// Created by 28057 on 2023/12/4.
//
#include<stdio.h>
#include<string.h>

int main() {
    int t = 0;
    char o;
    char a[1005] = {0};
    char b[1005] = {0};
    char c[2005] = {0};
    int d1 = 0, d2 = 0;
    int size = 0;
    scanf("%d", &t);
    for (int p = 0; p < t; p++) {
        scanf("%c", &o);
        for (int i = 0;; i++) {
            scanf("%c", a + i);
            if (*(a + i) == ';') {
                *(a + i) = '\0';
                break;
            }
        }
        for (int i = 0;; i++) {
            scanf("%c", b + i);
            if (*(b + i) == ';') {
                *(b + i) = '\0';
                break;
            }
        }
        scanf("%d%c%d%c%d", &d1, &o, &d2, &o, &size);
        size -= 1;
        int m = 0, n = 0, r = 0;
        int l = 0;
        int flag1 = 0, flag2 = 0, flag3 = 0;
        int lena = strlen(a);
        int lenb = strlen(b);
        for (;;) {
            if (flag1 == 1 && flag2 == 1) {
                *(c + lena + lenb) = '\0';
                break;
            }
            if (flag1 == 1 && flag2 == 0) { goto label2; }
            if (lena - m <= d1) {
                l = lena - m;
                flag1 = 1;
            } else { l = d1; }
            if (size - r <= l) {
                l = size - r;
                flag3 = 1;
            }
            for (int i = 0; i < l; i++) {
                *(c + r + i) = *(a + m + i);
            }
            m += l;
            r += l;
            if (flag3 == 1) {
                *(c + size) = '\0';
                break;
            }
            if (flag2 == 1 && flag1 == 0) { continue; }
            label2:
            if (lenb - n <= d2) {
                l = lenb - n;
                flag2 = 1;
            } else { l = d2; }
            if (size - r <= l) {
                l = size - r;
                flag3 = 1;
            }
            for (int i = 0; i < l; i++) {
                *(c + r + i) = *(b + n + i);
            }
            n += l;
            r += l;
            if (flag3 == 1) {
                *(c + size) = '\0';
                break;
            }
        }
        printf("%s\n", c);
    }
    return 0;
}