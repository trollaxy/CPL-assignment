//
// Created by 28057 on 2023/10/15.
//
#include<stdio.h>
int main(){
    int n=0;
    char s[2005];
    char temp;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%c",&temp);
        if(temp!='?') {
            s[n-i+1]=s[i]=temp;
        }
    }
    for(int i=1;i<=n;i++){
        printf("%c",s[i]);
    }
    return 0;
}