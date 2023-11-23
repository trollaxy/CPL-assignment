//
// Created by 28057 on 2023/10/28.
//
#include<stdio.h>
#include<math.h>
int main(){
    int n=0,t=0,num=0;
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++){
        num+=pow(10,i)*(n-i)*t;
    }
    printf("%d",num);
    return 0;
}