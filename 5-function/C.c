//
// Created by 28057 on 2023/10/28.
//
#include<stdio.h>
int main(){
    int n=0,x=0,y=0;
    int square[1000][1000]={0};
    scanf("%d",&n);
    x=0;
    y=(n-1)/2;
    for(int i=1;i<=n*n;i++){
        square[x][y]=i;
        if(square[(x+2)%n][(y+1)%n]==0){
            x=(x+2)%n;
            y=(y+1)%n;
        }
        else{
            x=(x+1)%n;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",square[i][j]);
        }
        printf("\n");
    }
    return 0;
}