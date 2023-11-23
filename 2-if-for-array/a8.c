//
// Created by 28057 on 2023/10/8.
//
#include<stdio.h>
int main(){
    int n=0,mod=0,temp=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        temp=1;
        for(int j=1;j<=i;j++){
            temp*=j%10007;
            temp%=10007;
        }
        mod+=temp;
        mod%=10007;
    }
    printf("%d\n",mod);
    return 0;
}