//
// Created by 28057 on 2023/12/27.
//
#include<stdio.h>

int find(int type, int num, double (*teamave)[3]);
int main() {
    int n = 0;
    char name[1000][21] = {0};
    char tmp[100] = {0};
    int team[1000][11][3] = {0};
    double teamave[1000][3] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", name[i]);
        for (int j = 0; j < 11; j++) {
            scanf("%s%d%d%d", tmp, &team[i][j][0], &team[i][j][1], &team[i][j][2]);
            teamave[i][0] += team[i][j][0];
            teamave[i][1] += team[i][j][1];
            teamave[i][2] += team[i][j][2];
        }
        teamave[i][0] /= 11.0;
        teamave[i][1] /= 11.0;
        teamave[i][2] /= 11.0;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s ", name[find(i, n, teamave)]);
        }
        printf("\n");
    }
    return 0;
}
int find(int type, int num, double (*teamave)[3]) {
    double max = teamave[0][type];
    int maxn = 0;
    for (int i = 0; i < num; i++) {
        if (teamave[i][type] > max) {
            max = teamave[i][type];
            maxn = i;
        }
    }
    teamave[maxn][type] = -1;
    return maxn;
}