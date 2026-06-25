#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d", &a);
    while(a>0){
        scanf("%d %d", &b,&c);

        if(b<c){
            int t=0;
            t=b;
            b=c;
            c=t;
        }

        if(b==1 && c==1){
            printf("1\n");
        }else{
            d=b-c;
            printf("%d\n", d);
        }

        a--;
    }
}
