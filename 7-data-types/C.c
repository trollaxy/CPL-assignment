//
// Created by 28057 on 2023/11/21.
//
#include<stdio.h>
#include<string.h>
int check(char bra[],int len);
int main(){
    int t=0;
    int len=0;
    char bra[100005];
    char o;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int flag=0;
        scanf("%c",&o);
        scanf("%s",bra);
        len=strlen(bra);
        do{
            flag=check(bra,len);
            if(flag==0) break;
            else len-=2;
        }
        while(len>0);
        if(flag==0) printf("False\n");
        else printf("True\n");
    }
    return 0;
}
int check(char bra[],int len){
    int flag=0;
    for(int i=0;i<len-1;i++){
        if(bra[i]=='{'&&bra[i+1]=='}'||bra[i]=='['&&bra[i+1]==']'||bra[i]=='('&&bra[i+1]==')'){
            for(int j=i;j<len-2;j++){
                bra[j]=bra[j+2];
            }
            return 1;
        }
    }
    return 0;
}