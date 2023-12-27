//
// Created by 28057 on 2023/12/27.
//
#include<stdio.h>

void add(int *a1, int *a2, int p1, int p2, char *var);
void sub(int *a1, int *a2, int p1, int p2, char *var);
void multi(int *a1, int *a2, int p1, int p2, char *var);
void print(int *a, int p, char *var);
void printm(int a, int i, int p, char *var);
int main() {
    int p1 = 0, p2 = 0;
    int a1[10005] = {0};
    int a2[10005] = {0};
    char var[20] = {0};
    scanf("%d%d", &p1, &p2);
    scanf("%s", var);
    for (int i = p1; i >= 0; i--) {
        scanf("%d", &a1[i]);
    }
    for (int i = p2; i >= 0; i--) {
        scanf("%d", &a2[i]);
    }
    add(a1, a2, p1, p2, var);
    sub(a1, a2, p1, p2, var);
    multi(a1, a2, p1, p2, var);
    return 0;
}
void add(int *a1, int *a2, int p1, int p2, char *var) {
    int p = p1 > p2 ? p1 : p2;
    int a = 0;
    int flag = 0;
    for (int i = p; i >= 0; i--) {
        a = a1[i] + a2[i];
        if (flag == 0 && a == 0) {
            p -= 1;
            continue;
        } else if (a != 0) { flag = 1; }
        printm(a, i, p, var);
    }
    printf("\n");
    /*while (a[p] == 0) {
        p--;
    }*/
    //print(a, p, var);
    return;
}

void sub(int *a1, int *a2, int p1, int p2, char *var) {
    int p = p1 > p2 ? p1 : p2;
    int a = 0;
    int flag = 0;
    for (int i = p; i >= 0; i--) {
        a = a1[i] - a2[i];
        if (flag == 0 && a == 0) {
            p -= 1;
            continue;
        } else if (a != 0) { flag = 1; }
        printm(a, i, p, var);
    }
    printf("\n");
    /*while (a[p] == 0) {
        p--;
    }*/
    //print(a, p, var);
    return;
}

void multi(int *a1, int *a2, int p1, int p2, char *var) {
    int p = p1 + p2;
    int a = 0;
    for (int i = p; i >= 0; i--) {
        a = 0;
        for (int j = p1 < i ? p1 : i; i - j <= p2 && j >= 0; j--) {
            a += a1[j] * a2[i - j];
        }
        printm(a, i, p, var);
    }
    printf("\n");
    /*while (a[p] == 0) {
        p--;
    }*/
    return;
}

void print(int *a, int p, char *var) {
    for (int i = p; i >= 0; i--) {
        if (a[i] == 0) { continue; }
        else if (a[i] > 0 && i != p) { printf("+"); }

        if (i == 0 || a[i] != 1 && a[i] != -1) { printf("%d", a[i]); }
        else if (a[i] == -1) { printf("-"); }
        if (i == 1) {
            printf("%s", var);
        } else if (i != 0 && i != 1) {
            printf("%s^%d", var, i);
        }
    }
    printf("\n");
}
void printm(int a, int i, int p, char *var) {
    if (a == 0) { return; }
    else if (a > 0 && i != p) { printf("+"); }

    if (i == 0 || a != 1 && a != -1) { printf("%d", a); }
    else if (a == -1) { printf("-"); }
    if (i == 1) {
        printf("%s", var);
    } else if (i != 0 && i != 1) {
        printf("%s^%d", var, i);
    }
}