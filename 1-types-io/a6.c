//
// Created by 28057 on 2023/9/26.
//
#include<stdio.h>
#include<math.h>
int main(){
    int p,q;
    double x;
    scanf("%d%d",&p,&q);
    x=cbrt(-q/2.0+sqrt(pow(q,2)/4+pow(p,3)/27))+cbrt(-q/2.0-sqrt(pow(q,2)/4+pow(p,3)/27));
    printf("%.3f\n",x);
    return 0;
    //double范围比int大
    /*printf("%d\n",pow(10000,3));
    printf("%f\n",sqrt(100000*100000*100000));*/
}