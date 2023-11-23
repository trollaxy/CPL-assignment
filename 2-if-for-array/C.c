//
// Created by 28057 on 2023/10/8.
//
#include<stdio.h>
#include<math.h>
int main(){
    int n=0;
    double x=0,y=0;
    scanf("%lf%d",&x,&n);
    for(int i=0;i<=n;i++){
        y+=pow(-1,i)*pow(x,2*i+1)/(2*i+1);
    }
    printf("%.10f\n",4*y);
    return 0;
}