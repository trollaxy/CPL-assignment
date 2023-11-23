//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
#include<string.h>
int main() {
    int a[3] = {0};
    int dir[3]={0,1,2};
    int len = 0;
    int temp=0;
    char move[1005];
    for(int i=0;i<3;i++){
        scanf("%d", &a[i]);
    }
    int x1=0,x2=a[0],y1=0,y2=a[1];
    getchar();
    scanf("%s", move);
    len = strlen(move);
    for(int i=0;i<len;i++){
        if(move[i]=='W'){
            x2=x1;
            x1=x2-a[dir[2]];
            temp=dir[0];
            dir[0]=dir[2];
            dir[2]=temp;
        }
        else if(move[i]=='S'){
            x1=x2;
            x2=x1+a[dir[2]];
            temp=dir[0];
            dir[0]=dir[2];
            dir[2]=temp;
        }
        else if(move[i]=='A'){
            y2=y1;
            y1=y2-a[dir[2]];
            temp=dir[1];
            dir[1]=dir[2];
            dir[2]=temp;
        }
        else if(move[i]=='D'){
            y1=y2;
            y2=y1+a[dir[2]];
            temp=dir[1];
            dir[1]=dir[2];
            dir[2]=temp;
        }
    }
    printf("%d %d %d %d\n",x1,x2,y1,y2);
    return 0;
}