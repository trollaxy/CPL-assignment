//
// Created by 28057 on 2023/10/8.
//
#include<stdio.h>
int main(){
    int n=0,x=0,total=0;
    scanf("%d",&n);
    int num[n+1];
    for(int i=0;i<=n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<=n;i++){
        if(num[i]==0) continue;
        else if((total+x)<i) {
            x=i-total;
        }
        total+=num[i];
    }
    printf("%d\n",x);
    return 0;
}