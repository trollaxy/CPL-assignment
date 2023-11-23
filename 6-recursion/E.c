//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
#include<math.h>
int n=0,p=0;
int a[25]={0};
double integration(double l,double r,double e);
double f(double x);
double sum(double a,double b);
int main(){
    double l=0,r=0,s=0;
    scanf("%d%d",&n,&p);
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%lf%lf",&l,&r);
    s=integration(l,r,10e-4);
    printf("%f\n",s);
    return 0;
}
double integration(double l,double r,double e){
    double sl=sum(l,(l+r)/2);
    double sr=sum((l+r)/2,r);
    double s=sum(l,r);
    if((sl+sr-s)>=(-15*e)&&(sl+sr-s)<=(15*e)) return (sl+sr+(sl+sr-s)/15);
    return (integration(l,(l+r)/2,e/2)+integration((l+r)/2,r,e/2));
}
double f(double x){
    double s=0;
    for(int i=0;i<=n;i++){
        s+=a[i]*pow(x,i);
    }
    s=pow(s,p);
    return s;
}
double sum(double a,double b){
    double s=0;
    s=(4*f((a+b)/2)+f(a)+f(b))/6*(b-a);
    return s;
}