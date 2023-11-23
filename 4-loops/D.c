//
// Created by 28057 on 2023/10/27.
//
#include<stdio.h>
int main(){
    int n=0;
    char temp;
    int map[105][105]={0};
    scanf("%d",&n);
    scanf("%c",&temp);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%c",&temp);
            if(temp=='*') map[i][j]=1;
            else map[i][j]=0;
        }
        scanf("%c",&temp);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(map[i][j]==1) printf("*");
            else printf("%d",map[i-1][j-1]+map[i-1][j]
            +map[i-1][j+1]+map[i][j-1]+map[i][j+1]
            +map[i+1][j-1]+map[i+1][j]+map[i+1][j+1]);
        }
        printf("\n");
    }
    return 0;
}