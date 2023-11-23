//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
int pour(int k,int a,int b,int c);
int va=0,vb=0,vc=0;
int a0=0,b0=0,c0=0;
int main(){
    int k=0,a=0,b=0,c=0;
    scanf("%d",&k);
    scanf("%d%d%d",&va,&vb,&vc);
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d%d%d",&a0,&b0,&c0);
    if(pour(k,a,b,c)) printf("Yes\n");
    else printf("No\n");
    return 0;
}
int pour(int k,int a,int b,int c){
    if(k==0){
        if(a==a0&&b==b0&&c==c0) return 1;
        else return 0;
    }
    if(pour(k-1,0,(a+b>vb)?vb:(a+b),c)) return 1;
    if(pour(k-1,0,b,(a+c>vc)?vc:(a+c))) return 1;
    if(pour(k-1,(a+b>va)?va:(a+b),0,c)) return 1;
    if(pour(k-1,a,0,(b+c>vc)?vc:(b+c))) return 1;
    if(pour(k-1,(a+c>va)?va:(a+c),b,0)) return 1;
    if(pour(k-1,a,(b+c>vb)?vb:(b+c),0)) return 1;
    return 0;
}