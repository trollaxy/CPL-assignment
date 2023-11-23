//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
int main(){
    int n=0,l=0,s=0;
    int v[10005]={0};
    int w[10005]={0};
    scanf("%d%d",&n,&l);
    for(int i=1;i<=n;i++){
        scanf("%d",&v[i]);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&w[i]);
    }
    do{
        int temp=1;
        for(int i=1;i<=n;i++){
            if(v[i]>v[temp]) temp=i;
        }
        if(l>=w[temp]){
            s+=v[temp]*w[temp];
            l-=w[temp];
        }
        else{
            s+=v[temp]*l;
            l=0;
        }
        v[temp]=0;
    }
    while(l>0);
    printf("%d\n",s);
    return 0;
}