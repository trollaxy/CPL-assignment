//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
#include<string.h>

int check(char bra[], int k, char type);
int len = 0;
int main() {
    int t = 0;
    int flag = 0;
    char bra[100005];
    int num[3] = {0};
    char o;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%c", &o);
        scanf("%s", bra);
        len = strlen(bra);
        flag = check(bra, -1, 'h');
        if (flag == -1) { printf("False\n"); }
        else { printf("True\n"); }
    }
    return 0;
}
int check(char bra[], int k, char type) {
    for (;;) {
        if (k >= len - 1 && type == 'h') { return 0; }
        else if (bra[k + 1] == '{' || bra[k + 1] == '[' || bra[k + 1] == '(') {
            k = check(bra, k + 1, bra[k + 1]);
            if (k == -1) { return -1; }
        } else if (bra[k + 1] == '}' && type == '{' || bra[k + 1] == ']' && type == '['
            || bra[k + 1] == ')' && type == '(') {
            return k + 1;
        } else { return -1; }
    }
}