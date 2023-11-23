//
// Created by 28057 on 2023/9/26.
//
#include<stdio.h>
int main(){
    double m,r,f;
    int i=0;
    scanf("%lf%lf",&m,&r);
    f=6.674e-11*77.15*m/r/r;
    //printf("%.4g\n",f);
    while(f>=10){
        f/=10;
        i++;
    }
    while(f<1){
        f*=10;
        i--;
    }
    if(i>=0) printf("%.3fe+%.2d\n",f,i);
    else if(i<0) printf("%.3fe%.2d\n",f,i);
    return 0;
}