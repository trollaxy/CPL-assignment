//
// Created by 28057 on 2023/9/26.
//
#include<stdio.h>
int main(){
    int year,month,day,jdn,a,y,m;
    scanf("%d%d%d",&year,&month,&day);
    a=(14-month)/12;
    y=year+4800-a;
    m=month+12*a-3;
    jdn=day+(153*m+2)/5+365*y+y/4-y/100+y/400-32045;
    printf("%d",jdn);
    return 0;
}