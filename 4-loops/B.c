//
// Created by 28057 on 2023/10/25.
//
#include<stdio.h>
int main(){
    int m,n;
    char front[2005]={'0'};
    char now[2005]={'0'};
    for(int i=0;i<2005;i++){
        front[i]='0';
        now[i]='0';
    }
    int jud(char x,char y,char z);
    scanf("%d%d",&m,&n);
    getchar();
    for(int i=1;i<=n;i++){
        scanf("%c",&front[i]);
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<=n;j++){
            if(jud(front[j-1],front[j],front[j+1])){
                now[j]='1';
            }
            else now[j]='0';
        }
        for(int j=1;j<=n;j++){
            printf("%c",now[j]);
            front[j]=now[j];
        }
        printf("\n");
    }
}
int jud(char x,char y,char z){
    int flag=0;
    flag=(x=='1'&&y=='1'&&z=='0')||(x=='1'&&y=='0'&&z=='1')
            ||(x=='0'&&y=='1'&&z=='1')||(x=='0'&&y=='1'&&z=='0')
            ||(x=='0'&&y=='0'&&z=='1');
    return flag;
}