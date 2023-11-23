//
// Created by 28057 on 2023/10/25.
//
#include<stdio.h>
int n[9][9];
int jud[10]={0};
int main(){
    int judge_row(int row);
    int judge_col(int col);
    int judge_square(int x,int y);
    void zero();
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0;i<9;i++){
        zero();
        if(judge_row(i)){
            printf("NO\n");
            return 0;
        }
    }
    for(int i=0;i<9;i++){
        zero();
        if(judge_col(i)){
            printf("NO\n");
            return 0;
        }
    }
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            zero();
            if(judge_square(i,j)){
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}
int judge_row(int row){
    for(int i=0;i<9;i++){
        if(jud[n[row][i]]==1) return 1;
        else jud[n[row][i]]+=1;
    }
    return 0;
}
int judge_col(int col){
    for(int i=0;i<9;i++){
        if(jud[n[i][col]]==1) return 1;
        else jud[n[i][col]]+=1;
    }
    return 0;
}
int judge_square(int x,int y){
    for(int i=x;i<x+3;i++){
        for(int j=y;j<y+3;j++){
            if(jud[n[i][j]]==1) return 1;
            else jud[n[i][j]]+=1;
        }
    }
    return 0;
}
void zero(){
    for(int i=1;i<=9;i++){
        jud[i]=0;
    }
}