//
// Created by 28057 on 2023/12/27.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int comp(const void *a, const void *b);
int main() {
    char s[100000] = {0};
    char *ptr[100];
    char itv;
    //char str[100][100] = {0};
    scanf("%s", s);
    getchar();
    scanf("%c", &itv);
    ptr[0] = s;
    int n = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == itv) {
            ptr[n] = s + i + 1;
            s[i] = '\0';
            n++;
        }
    }
    //printf("%s", s);
    /*for (int i = 0; i < n; i++) {
        strcpy(&str[i], ptr[i]);
        ptr[i] = &str[i];
        printf("%s\n", str[i]);
    }*/
    qsort(ptr, n, sizeof *ptr, comp);
    for (int i = 0; i < n; i++) {
        printf("%s\n", ptr[i]);
    }
    return 0;
}
int comp(const void *a, const void *b) {
    char **left = (char **) a;
    char **right = (char **) b;
    return strcmp(*left, *right);
}