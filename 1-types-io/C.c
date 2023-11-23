//
// Created by 28057 on 2023/9/26.
//
#include<stdio.h>
int main(){
    char month[10],week[10];
    int day,year,hour,minute,second;
    scanf("%s%d%d%s%d%d%d",month,&day,&year,week,&hour,&minute,&second);
    printf("%.3s %.3s %.2d %.2d:%.2d:%.2d %.4d\n",week,month,day,hour,minute,second,year);
    return 0;
}