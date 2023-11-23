//
// Created by 28057 on 2023/10/28.
//
#include<stdio.h>
int main(){
    int n=0,m=0,t=0;
    int min=0;
    int temp=0;
    int flag=0;
    int a[100005]={0};
    int b[100005]={0};
    scanf("%d%d%d",&n,&m,&t);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if(b[j]>b[j+1]){
                b[j]+=b[j+1];
                b[j+1]=b[j]-b[j+1];
                b[j]-=b[j+1];
            }
        }
    }
    min=__INT_MAX__;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp=t-a[i]-b[j];
            if(temp<0) break;
            flag=1;
            if(temp<min) min=temp;
        }
    }
    if(flag==0) printf("-1\n");
    else printf("%d\n",min);
    return 0;
}