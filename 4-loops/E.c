//
// Created by 28057 on 2023/10/28.
//
#include<stdio.h>
int map[55][55]={0};
int flag[55][55]={0};
int route_x[2505]={0};
int route_y[2505]={0};
int ans=0;
int main(){
    int n=0,m=0;
    int x=0,y=0;
    int trace(int num,int x,int y);
    char temp;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    scanf("%c",&temp);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%c",&temp);
            if(temp=='#') {
                map[i][j]=1;
                ans+=1;
            }
            else map[i][j]=0;
        }
        scanf("%c",&temp);
    }
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d",map[i][j]);
        }
        printf("\n");
    }*/
    if(trace(1,x,y)){
        printf("%d\n",ans);
        for(int i=1;i<=ans;i++){
            printf("%d %d\n",route_x[i],route_y[i]);
        }
    }
    else printf("NO ROUTE BE FOUND\n");
    return 0;
}
int trace(int num,int x,int y){
    route_x[num]=x;
    route_y[num]=y;
    flag[x][y]=1;
    if(num==ans) return 1;
    if(map[x-1][y]*(1-flag[x-1][y])) {
        if(trace(num+1,x-1,y)) return 1;
    }
    if(map[x+1][y]*(1-flag[x+1][y])) {
        if(trace(num+1,x+1,y)) return 1;
    }
    if(map[x][y-1]*(1-flag[x][y-1])) {
        if(trace(num+1,x,y-1)) return 1;
    }
    if(map[x][y+1]*(1-flag[x][y+1])) {
        if(trace(num+1,x,y+1)) return 1;
    }
    flag[x][y]=0;
    return 0;
}