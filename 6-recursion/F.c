//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
#include<math.h>
void paint(int n,int x,int y);
int p[1030][2050]={0};
int main(){
    int n=0;
    scanf("%d",&n);
    paint(n,1,pow(2,n));
    for(int i=1;i<=pow(2,n);i++){
        for(int j=1;j<=pow(2,n+1);j++){
            switch(p[i][j]){
                case 0:printf(" ");break;
                case 1:printf("/");break;
                case 2:printf("\\");break;
                case 3:printf("_");break;
                default:break;
            }
        }
        printf("\n");
    }
}
void paint(int n,int x,int y){
    if(n==1){
        p[x][y]=1;
        p[x][y+1]=2;
        p[x+1][y-1]=1;
        p[x+1][y]=3;
        p[x+1][y+1]=3;
        p[x+1][y+2]=2;
        return;
    }
    paint(n-1,x,y);
    paint(n-1,x+pow(2,n-1),y-pow(2,n-1));
    paint(n-1,x+pow(2,n-1),y+pow(2,n-1));
    return;
}