#include <stdio.h>

int main(){
    char a[156]={'\0'};
    int b=2, p[13]={0},c[13]={0},e[13]={0},u[13]={0},d=0;
    int p1=0,c1=0,u1=0,e1=0;

    scanf("%s", a);

    while(a[b]!='\0'){
        if(a[b]=='E'){
            d+=10*((int)a[b-2]-48);
            d+=(int)a[b-1];
            e[d-1]+=1;
            if(e[d-1]==2){
                e1=23;
            }else{
                e1++;
            }
            d=0;
        }else if(a[b]=='P'){
            d+=10*((int)a[b-2]-48);
            d+=(int)a[b-1]-48;

            p[d-1]+=1;
            if(p[d-1]==2){
                p1=23;
            }else{
                p1++;
            }
            d=0;
        }else if(a[b]=='U'){
            d+=10*((int)a[b-2]-48);
            d+=(int)a[b-1]-48;

            u[d-1]+=1;
            if(u[d-1]==2){
                u1=23;
            }else{
                u1++;
            }
            d=0;
        }else if(a[b]=='C'){
            d+=10*((int)a[b-2]-48);
            d+=(int)a[b-1]-48;

            c[d-1]+=1;
            if(c[d-1]==2){
                c1=23;
            }else{
                c1++;
            }
            d=0;
        }

        b+=3;
    }
    if(c1<23){
        printf("%d\n", 13-c1);
    }else{
        printf("erro\n");
    }

    if(e1<23){
        printf("%d\n", 13-e1);
    }else{
        printf("erro\n");
    }
    if(u1<23){
        printf("%d\n", 13-u1);
    }else{
        printf("erro\n");
    }

    if(p1<23){
        printf("%d\n", 13-p1);
    }else{
        printf("erro\n");
    }

}
