//
// Created by 28057 on 2023/10/8.
//
#include<stdio.h>
int main(){
    int n=0,k=0;
    scanf("%d",&n);
    char s[n+1];
    for(int i=0;i<=n;i++){
        scanf("%c",&s[i]);
    }
    scanf("%d",&k);
    for(int i=k;i>=1;i--){
        printf("%c",s[i]);
    }
    for(int i=n;i>=k+1;i--){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}