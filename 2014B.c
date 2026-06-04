#include <stdio.h>

int main(){
    int t=0, a=0,b=0, d=0;

    scanf("%d", &t);

    for(int i=t;i>0;i--){
        scanf("%d %d", &a,&b);

        d=(-1*b*b)+(2*a*b)+b;

        d/=2;

        if(d%2==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
