//
// Created by 28057 on 2023/10/28.
//
#include<stdio.h>
#include<math.h>
int main(){
    int p,q,r;
    int trans(int n,int rad);
    scanf("%d%d%d",&p,&q,&r);
    for(int i=2;i<=40;i++){
        if(trans(p,i)==0||trans(q,i)==0||trans(r,i)==0) continue;
        if(trans(p,i)*trans(q,i)==trans(r,i)) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
int trans(int n,int rad){
    int dec=0;
    int i=0;
    while(n>0){
        if(n%10>=rad) return 0;
        dec+=n%10*pow(rad,i);
        n/=10;
        i++;
    }
    return dec;
}