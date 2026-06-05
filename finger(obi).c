#include <stdio.h>

int main(){
    int a=0,b=0;
    char d[6]={0},e[6]={'*','\0'};

    scanf("%d", &a);

    if(a>5){
        for(int i=0;i<5;i++){
            e[i]='I';
        }
        e[5]='\0';

        a%=5;

        if(a!=0){
        for(int i=0;i<a;i++){
            d[i]='I';
        }
        d[a]='\0';
        printf("%s\n%s\n", e,d);
        }else{
        for(int i=0;i<5;i++){
            d[i]='I';
        }
        d[6]='\0';
        printf("%s\n%s\n", e,d);
        }
    }else if(a!=0){
        for(int i=0;i<a;i++){
            e[i]='I';
        }
        e[a]='\0';

        printf("%s\n*\n", e);
    }else{
        printf("*\n*\n");
    }
}
