//
// Created by 28057 on 2023/11/26.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *word;
    int len = 0;
    int flag = 0;
    word = malloc(5000);
    gets(word);
    len = strlen(word);
    for (int i = 0; i < len; i++) {
        if (flag == 0) {
            if (*(word + i) >= 'a' && *(word + i) <= 'z') { *(word + i) += ('A' - 'a'); }
            flag = 1;
        } else if (*(word + i) == 32) { flag = 0; }
        else {
            if (*(word + i) >= 'A' && *(word + i) <= 'Z') { *(word + i) += ('a' - 'A'); }
        }
        printf("%c", *(word + i));
    }
    printf("\n");
    free(word);
    return 0;
}