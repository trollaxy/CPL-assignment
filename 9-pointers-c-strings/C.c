//
// Created by 28057 on 2023/12/4.
//
#include<stdio.h>
#include<string.h>

int Print(char *out, int x, char c, char s[100]);

int main() {
    char r[150] = {0};
    char name[1024] = {0};
    char out[10005] = {0};
    char n[1024][1024] = {0};
    char temp[1024] = {0};
    int i = -1;
    int flag = 0;
    int o = 0;
    scanf("%s", r);
    scanf("%s", name);
    int lenr = strlen(r);
    while (scanf("%s", n[++i]) != EOF) {
        if (n[i][0] != '-') { continue; }
        flag = 0;
        for (int j = 0; j < lenr; j++) {
            if (r[j] == n[i][1]) {
                if (r[j + 1] == ':') {
                    if (scanf("%s", temp) != EOF) {
                        o += Print(out, o, n[i][1], temp);
                    } else {
                        printf("%s: option requires an argument -- '%c'", name, n[i][1]);
                        return 0;
                    }
                } else {
                    out[o] = n[i][1];
                    out[o + 1] = '\n';
                    o += 2;
                }
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%s: invalid option -- '%c'", name, n[i][1]);
            return 0;
        }
    }
    printf("%s\n%s", name, out);
    return 0;
}

int Print(char *out, int x, char c, char s[100]) {
    out[x] = c;
    out[x + 1] = '=';
    int t = strlen(s);
    for (int i = 0; i < t; i++) {
        out[x + 2 + i] = s[i];
    }
    out[x + 2 + t] = '\n';
    return 3 + t;
}