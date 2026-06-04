#include <stdio.h>

long long exp_binaria(long long base, long long expoente, long long mod){
    long long resultado = 1;

    base %= mod;

    while(expoente > 0){
        if(expoente % 2 == 1){
            resultado = (resultado * base) % mod;
        }

        base = (base * base) % mod;
        expoente /= 2;
    }

    return resultado;
}

int main(){
    int c=0,n=0, d=0, green=0, a=0, pot=1,f=1,h=0, test=0;

    scanf("%d", &c);

    for(int i=c;i>0;i--){
        scanf("%d", &n);

        d=n-1;

        while(green!=1){
            if(d%2==0){
                d/=2;
                a++;
            }else{
                green=1;
            }
        }
        green=0;

        for(int i=0;i<d;i++){
            pot=exp_binaria(2,d,n);
        }

        while(green!=1 && n!=2){
            if(pot==1 || pot==n-1){
                    test++;
                    green=1;
            }

            if(green!=1){
            for(int i=0;i<a-1;i++){
                f=(f*pot*pot)%n;
                if(f==1 || f==n-1){
                    test++;
                    green=1;
                }
            }
            green=1;
            }
        }

        green=0;

        if(test!=0 || n==2){
            printf("YES\n");
            f=1;
            pot=1;
            a=0;
        }else{
            printf("NO\n");
        }

    }

}
