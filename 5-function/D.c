//
// Created by 28057 on 2023/10/28.
//
#include<stdio.h>
#include<math.h>
int main(){
    int n=0;
    int count=0;
    int prime(int n);
    int turn(int n);
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(prime(i)&&prime(turn(i))) count++;
    }
    printf("%d",count);
    return 0;
}
int prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int turn(int n){
    int num[10]={0};
    int new=0;
    int i=0;
    while(n>0){
        num[i]=n%10;
        n/=10;
        i++;
    }
    for(int j=0;j<i;j++){
        new+=num[j]*pow(10,i-j-1);
    }
    return new;
}