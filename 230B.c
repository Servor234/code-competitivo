#include <stdio.h>
#include <math.h>

int main(){
    long long b=0, c=0, d=0, a=0;

    scanf("%lld", &b);

    for(int i=0;i<b;i++){
    scanf("%lld", &a);
    c=sqrt(a);
    if(c*c!=a){
        printf("NO\n");
        d=0;
    }else if(a==1){
        printf("NO\n");
    }else if(c%2==0 && a>4){
        printf("NO\n");
    }else{
        d=1;
    }

    if(d==1){
    for(long long i=3;i*i<=c;i+=2){
        if(c%i==0){
            printf("NO\n");
            d=0;
            break;
        }
    }
        if(d==1){
            printf("YES\n");
            d=0;
        }
    }

    }



}
