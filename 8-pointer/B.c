//
// Created by 28057 on 2023/11/26.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int comp(char *s, char *t, int l, int loc);
int main() {
    char *s, *t;
    int lens = 0, lent = 0;
    s = malloc(100005 * sizeof(char));
    t = malloc(100005 * sizeof(char));
    scanf("%s", s);
    getchar();
    scanf("%s", t);
    lens = strlen(s);
    lent = strlen(t);
    for (int i = 0; i < lens; i++) {
        if (*(s + i) == *t && comp(s, t, lent, i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    free(s);
    free(t);
    return 0;
}
int comp(char *s, char *t, int l, int loc) {
    for (int i = 1; i < l; i++) {
        if (*(s + loc + i) != *(t + i)) { return 0; }
    }
    return 1;
}