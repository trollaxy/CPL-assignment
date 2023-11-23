//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
#include<math.h>
int main(){
    int n=0,m=0,d=0;
    int max=0;
    int c=0;
    int map[700][700]={0};
    int v[700][700]={0};
    scanf("%d%d%d",&n,&m,&d);
    for(int i=d;i<d+n;i++){
        for(int j=d;j<d+m;j++){
            scanf("%d",&map[i][j]);
        }
    }
    for(int i=d;i<d+n;i++){
        for(int j=d;j<d+m;j++){
            for(int k=-d;k<=d;k++){
                for(int l=-d+(k>0?k:-k);l<=d-(k>0?k:-k);l++){
                    v[i][j]+=map[i+k][j+l];
                }
            }
        }
    }
    max=v[d][d];
    c=0;
    for(int i=d;i<d+n;i++){
        for(int j=d;j<d+m;j++){
            if(v[i][j]>max) {
                max=v[i][j];
                c=1;
            }
            else if(v[i][j]==max) c+=1;
        }
    }
    printf("%d %d\n",max,c);
    for(int i=d;i<d+n;i++){
        for(int j=d;j<d+m;j++){
            if(v[i][j]==max) {
                printf("%d %d\n",i+1-d,j+1-d);
            }
        }
    }
    return 0;
}