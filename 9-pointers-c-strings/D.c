//
// Created by 28057 on 2023/12/4.
//
#include<stdio.h>
#include<string.h>

int CheckType(int a, int b, char *sent, char *out);
void Print(int x, char *out);
void copy(int a, int x, char s[10], char *out);

char res[16][10] =
    {"const", "int", "float", "double", "long", "static", "void", "char", "extern", "return", "break", "enum", "struct",
     "typedef", "union", "goto"};
char opr[11][5] = {"+", "-", "*", "/", "=", "==", "!=", ">=", "<=", ">", "<"};
int o = 0;

int main() {
    char out[10005] = {0};
    char sent[4096] = {0};
    int lens = 0;
    while (scanf("%s", sent) != EOF) {
        //if(strcmp(sent,";")==0) continue;
        lens = strlen(sent);
        int flag = 0;
        for (int i = 0; i < lens; i++) {
            if (sent[i] == ';') {
                if (CheckType(flag, i - 1, sent, out)) {
                    printf("Compile Error\n");
                    return 0;
                }
                out[o] = '\n';
                o++;
                flag = i + 1;
            }
        }
        if (CheckType(flag, lens - 1, sent, out)) {
            printf("Compile Error\n");
            return 0;
        }
        //printf("%s\n", out);
    }
    printf("%s", out);
    return 0;
}

int CheckType(int a, int b, char *sent, char *out) {
    int len = 0;
    int flag = 0;
    int num = 0;
    if (b < a) { return 0; }
    for (int i = 0; i < 16; i++) {
        flag = 0;
        len = strlen(res[i]);
        if (b - a + 1 != len) {
            //flag=1;
            continue;
        }
        for (int j = a; j < a + len; j++) {
            if (sent[j] != res[i][j - a]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            Print(1, out);
            return 0;
        }
    }
    for (int i = 0; i < 11; i++) {
        flag = 0;
        len = strlen(opr[i]);
        if (b - a + 1 != len) {
            //flag=1;
            continue;
        }
        for (int j = a; j < a + len; j++) {
            if (sent[j] != opr[i][j - a]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            Print(4, out);
            return 0;
        }
    }
    //if(sent[a]>='0'&&sent[a]<='9'||sent[a]=='.'){
    num = 0;
    flag = 0;
    for (int i = a; i <= b; i++) {
        if (!(sent[i] >= '0' && sent[i] <= '9' || sent[i] == '.')) {
            flag = 1;
            break;
        } else if (sent[i] == '.') {
            num++;
            if (num > 1) {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0 && num == 0) {
        Print(2, out);
        return 0;
    } else if (flag == 0 && num == 1) {
        Print(3, out);
        return 0;
    }
    //}
    if (!(sent[a] >= 'a' && sent[a] <= 'z' || sent[a] >= 'A' && sent[a] <= 'Z' || sent[a] == '_')) {
        return 1;
    }
    for (int i = a + 1; i <= b; i++) {
        if (!(sent[i] >= 'a' && sent[i] <= 'z' || sent[i] >= 'A' && sent[i] <= 'Z' || sent[i] >= '0' && sent[i] <= '9'
            || sent[i] == '_')) {
            return 1;
        }
    }
    Print(5, out);
    return 0;
}
void Print(int x, char *out) {
    switch (x) {
        case 1: {
            copy(o, 8, "reserved", out);
            o += 8;
            break;
        }
        case 2: {
            copy(o, 7, "integer", out);
            o += 7;
            break;
        }
        case 3: {
            copy(o, 5, "float", out);
            o += 5;
            break;
        }
        case 4: {
            copy(o, 8, "operator", out);
            o += 8;
            break;
        }
        case 5: {
            copy(o, 8, "variable", out);
            o += 8;
            break;
        }
        default:break;
    }
    out[o] = ' ';
    o++;
}
void copy(int a, int x, char s[10], char *out) {
    for (int i = a; i < a + x; i++) {
        out[i] = s[i - a];
    }
    return;
}