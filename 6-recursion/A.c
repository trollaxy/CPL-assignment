//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
int main(){
    long long int a=0,b=0;
    double x=1;
    scanf("%lld%lld",&a,&b);
    if(b>a/2) b=a-b+1;
    for(int i=1;i<=b-1;i++){
        x*=(a-i);
        x/=(b-i);
    }
    printf("%.0f",x);
    return 0;
}