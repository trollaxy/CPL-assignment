//
// Created by 28057 on 2023/10/8.
//
#include<stdio.h>
int main(){
    int n=0,num=0,temp=0;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        scanf("%d",&temp);
        num=num^temp;
    }
    printf("%d\n",num);
    return 0;
}