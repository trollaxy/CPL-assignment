//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
int a[100005]={0};
int l[100005]={0};
int r[100005]={0};
int main(){
    int n=0;
    void find(int left,int right);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    find(1,n);
    for(int i=1;i<=n;i++){
        printf("%d %d\n",l[i],r[i]);
    }
    return 0;
}
void find(int left,int right){
    int temp=left;
    if(left>right) return;
    for(int i=left;i<=right;i++){
        if(a[i]>=a[temp]) temp=i;
    }
    l[temp]=left;
    r[temp]=right;
    find(left,temp-1);
    find(temp+1,right);
    return;
}