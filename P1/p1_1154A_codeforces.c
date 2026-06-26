#include <stdio.h>

int main(){
    int a,b,c,d,t, i,f,j;

    scanf("%d %d %d %d", &a,&b,&c,&d);

    for(int g=0;g<4;g++){
    if(d<a){
        t=d;
        d=a;
        a=t;
    }
    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    if(b<c){
        t=b;
        b=c;
        c=t;
    }
    }

    f=d-b;
    i=a-f;
    j=d-f-i;

    printf("%d %d %d", i,f,j);

}
