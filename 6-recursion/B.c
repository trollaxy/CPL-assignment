//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
int main(){
    int n=0;
    int a[50]={0};
    scanf("%d",&n);
    a[1]=1;
    a[2]=2;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d",a[n]);
    return 0;
}