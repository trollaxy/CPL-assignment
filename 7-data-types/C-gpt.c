//
// Created by 28057 on 2023/11/23.
//
#include <stdio.h>
#include <stdbool.h> // 使用bool类型

// 函数原型
bool isBalancedSequence(char *s);

int main() {
    int T;
    scanf("%d", &T); // 输入测试数据组数

    for (int i = 0; i < T; i++) {
        char s[100001];
        scanf("%s", s); // 输入括号序列

        bool isBalanced = isBalancedSequence(s);

        if (isBalanced) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }

    return 0;
}

bool isBalancedSequence(char *s) {
    char stack[100001]; // 定义栈，用于存储左括号
    int top = -1; // 栈顶指针初始化为-1

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            // 遇到左括号，入栈
            stack[++top] = s[i];
        } else {
            // 遇到右括号，与栈顶元素进行匹配
            if (top == -1) {
                return false; // 栈为空，无法匹配，返回false
            }

            if ((s[i] == ')' && stack[top] == '(') ||
                (s[i] == ']' && stack[top] == '[') ||
                (s[i] == '}' && stack[top] == '{')) {
                // 匹配成功，出栈
                top--;
            } else {
                // 匹配失败，返回false
                return false;
            }
        }
    }

    // 最后栈为空则为合法括号序列
    return (top == -1);
}
