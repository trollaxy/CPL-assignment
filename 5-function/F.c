//
// Created by 28057 on 2023/10/28.
//
#include<stdio.h>
int main(){
    int n=0;
    int len=0;
    int pre=0;
    int num[2005]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    pre=num[n-1];
    len=1;
    for(int i=n-2;;i--){
        if(num[i]<pre) break;
        pre=num[i];
        len++;
    }
    for(int i=n-1;;i--){
        if(num[n-1-len]<num[i]){
            num[n-1-len]+=num[i];
            num[i]=num[n-1-len]-num[i];
            num[n-1-len]-=num[i];
            break;
        }
    }
    for(int i=n-1;i>=(2*n+1-len)/2;i--){
        num[i]+=num[2*n-1-len-i];
        num[2*n-1-len-i]=num[i]-num[2*n-1-len-i];
        num[i]-=num[2*n-1-len-i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}