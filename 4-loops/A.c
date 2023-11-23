//
// Created by 28057 on 2023/10/25.
//
#include<stdio.h>
int main(){
    int m,n,p,num;
    int a[100][100];
    int b[100][100];
    scanf("%d%d%d",&m,&n,&p);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            num=0;
            for(int k=0;k<n;k++){
                num+=a[i][k]*b[k][j];
            }
            printf("%d ",num);
        }
        printf("\n");
    }
    return 0;
}