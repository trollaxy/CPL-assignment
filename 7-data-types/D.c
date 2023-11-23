//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
#include<math.h>

int main() {
    int n = 0, q = 0;
    int list[10000] = {0};
    int id[10000] = {0};
    int count = 0;
    int temp = 0, size = 0, flag = 0;
    int num = 0;
    char s;
    scanf("%d%d", &n, &q);
    list[0] = pow(2, n);
    count = 1;
    for (int i = 0; i < q; i++) {
        getchar();
        scanf("%c", &s);
        if (s == 'Q') {
            printf("%d\n", count);
            for (int m = 0; m < count; m++) {
                printf("%d ", id[m]);
            }
            printf("\n");
        } else if (s == 'A') {
            flag = 0;
            scanf("%d%d", &temp, &size);
            for (int m = 0; m <= n; m++) {
                if (size <= pow(2, m)) {
                    size = pow(2, m);
                    break;
                }
            }
            for (int m = 0; m < count; m++) {
                if (list[m] == size && id[m] == 0) {
                    id[m] = temp;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                for (int m = 0; m < count; m++) {
                    if (list[m] > size && id[m] == 0) {
                        num = log2(list[m] / size);
                        count += num;
                        for (int k = count - 1; k > m + num; k--) {
                            list[k] = list[k - num];
                            id[k] = id[k - num];
                        }
                        for (int k = m + 1; k <= m + num; k++) {
                            list[k] = size * pow(2, k - m - 1);
                            id[k] = 0;
                        }
                        list[m] = size;
                        id[m] = temp;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}