//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
int main(){
    int n=0;
    int a[100005]={0};
    int head[100005]={0};
    int find(int x,const int a[],int head[]);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(head[i]!=0){
            printf("%d ",head[i]);
        }
        else printf("%d ",find(i,a,head));
    }
    return 0;
}
int find(int x,const int a[],int head[]){
    int temp=0;
    if(a[x]==x) {
        head[x]=x;
        return x;
    }
    temp=find(a[x],a,head);
    head[x]=temp;
    return temp;
}