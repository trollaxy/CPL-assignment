//
// Created by 28057 on 2023/9/25.
//
/*#include<stdio.h>
int main(){

    return 0;
}*/
#include<stdio.h>
int main(){
    int n,a[5],b[5]={50,20,10,5,1};
    scanf("%d",&n);
    for(int i=0;i<=4;i++){
        a[i]=n/b[i];
        n-=a[i]*b[i];
        printf("%d\n",a[i]);
    }
    return 0;
}