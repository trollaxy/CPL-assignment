//
// Created by 28057 on 2023/10/16.
//
#include<stdio.h>
int main(){
    int n=0,k=0,left=0,die=0;
    int a[505],b[505];
    scanf("%d%d",&n,&k);
    left=n;
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    while(left>1){
        die=k%left;
        for(int j=1;j<left;j++){
            b[j]=a[(die+j-1)%left+1];
        }
        for(int j=1;j<left;j++){
            a[j]=b[j];
        }
        left--;
    }
    printf("%d\n",a[1]);
    return 0;
}