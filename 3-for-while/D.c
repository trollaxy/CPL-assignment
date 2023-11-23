//
// Created by 28057 on 2023/10/15.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n=0,flag=1,temp=0,k=0;
    char s[25];
    char d[20];
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++){
        for(int j=0;j<25;j++){
            s[j]='0';
        }
        for(int j=0;j<20;j++){
            d[j]='0';
        }
        flag=1;
        for(int j=0;;j++) {
            scanf("%c", &d[j]);
            if(d[j]=='\n') break;
            else if(d[j]=='-') flag=-1;
            else if(d[j]<48||d[j]>57) flag=0;
        }
        if(flag==0)printf("Radix Error\n");
        else{
            temp=flag*atoi(d);
            //itoa(temp,s,3);
            k=0;
            do{
                s[k]=temp%3+48;
                temp/=3;
                k++;
            }
            while(temp>0);
            //s[k]='0';
            //len=k=strlen(s);
            for(int q=0;q<k;q++){
                switch(s[q]){
                    case '2':s[q]='Z';s[q+1]+=1;break;
                    case '3':s[q]='0';s[q+1]+=1;break;
                    default:break;
                }
            }
            if(flag==1){
                if(s[k]!='0') printf("%c",s[k]);
                for(int q=k-1;q>=0;q--){
                    printf("%c",s[q]);
                }
            }
            else{
                if(s[k]!='0'){
                    for(int q=k;q>=0;q--){
                        switch(s[q]){
                            case 'Z':printf("1");break;
                            case '1':printf("Z");break;
                            default:printf("0");break;
                        }
                    }
                }
                else{
                    for(int q=k-1;q>=0;q--){
                        switch(s[q]){
                            case 'Z':printf("1");break;
                            case '1':printf("Z");break;
                            default:printf("0");break;
                        }
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}