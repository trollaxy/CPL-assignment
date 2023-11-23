//
// Created by 28057 on 2023/10/8.
//
#include<stdio.h>
int main(){
    int n=0,i=0;
    scanf("%d",&n);
    int max=n;
    while(n!=1){
        if(n%2){
            n=3*n+1;
            if(n>max) max=n;
        }
        else{
            n/=2;
        }
        i+=1;
    }
    printf("%d %d\n",i,max);
    return 0;
}