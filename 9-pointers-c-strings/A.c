//
// Created by 28057 on 2023/12/4.
//
#include<stdio.h>
#include<string.h>

void mystract(char *a, char *b, char *c);
int main() {
    int t = 0;
    char a[1005] = {0};
    char b[1005] = {0};
    char c[2005] = {0};
    scanf("%d", &t);
    for (int p = 0; p < t; p++) {
        scanf("%s", a);
        scanf("%s", b);
        mystract(a, b, c);
        printf("%s\n", c);
    }
    return 0;
}
void mystract(char *a, char *b, char *c) {
    int lena = 0, lenb = 0, lenmin = 0;
    int lmax = 0;
    int i = 0, j = 0;
    lena = strlen(a);
    lenb = strlen(b);
    lenmin = (lena < lenb ? lena : lenb);
    for (i = 1; i <= lenmin; i++) {
        int flag = 0;
        for (int k = 0; k < i; k++) {
            if (*(a + lena - i + k) != *(b + k)) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) { lmax = i; }
    }
    for (j = 0; j < lena; j++) {
        *(c + j) = *(a + j);
    }
    for (j = lmax; j < lenb; j++) {
        *(c + lena + j - lmax) = *(b + j);
    }
    *(c + lena + lenb - lmax) = '\0';
    return;
}