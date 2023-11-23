//
// Created by 28057 on 2023/10/16.
//
#include<stdio.h>
#include<limits.h>
int main(){
    int n=0,num=0,max=0,temp=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        max=INT_MIN;
        for(int j=0;j<num-1;j++){
            scanf("%d",&temp);
            if(temp>max) max=temp;
        }
        scanf("%d",&temp);
        if(temp>=max) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}