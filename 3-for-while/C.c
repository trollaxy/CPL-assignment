//
// Created by 28057 on 2023/10/15.
//
#include<stdio.h>
#include<math.h>
int main(){
    int n=0;
    int len=0;
    char a[20];
    scanf("%d",&n);
    scanf("%c",&a[0]);
    for(int i=1;i<=n;i++){
        int flag=0;
        for(len=0;1;len++){
            scanf("%c",&a[len]);
            if(a[len]=='\n') break;
            else if(a[len]!='0'&&a[len]!='1'&&a[len]!='Z') {
                flag = 1;
            }
        }
        if(flag==1){
            printf("Radix Error\n");
        }
        else{
            int dec=0;
            int num=0;
            for(int i=0;i<len;i++){
                switch (a[i]) {
                    case '0':num=0;break;
                    case '1':num=1;break;
                    case 'Z':num=-1;break;
                    default:break;
                }
                dec+=num*pow(3,len-1-i);
            }
            printf("%d\n",dec);
        }
    }
    return 0;
}