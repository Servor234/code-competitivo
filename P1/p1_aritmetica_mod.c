#include <stdio.h>

long long mod_pow(long long a,long long b){
    long long res = 1;
    int f=998244353;
    a %= f;

    while (b > 0) {
        if (b & 1)
            res = (res * a) % f;
        a = (a * a) % f;
        b >>= 1;
    }

    return res;
}

int main(){
    long long d=0;
    long long a=0,b=0,c=0;
    int f=998244353;

    if(scanf("%lld %lld %lld", &a,&b,&c)!=3){
        return 0;
    }

    a=((a%f)*((a+1)%f))%f;

    b=((b%f)*((b+1)%f))%f;

    c=((c%f)*(((c+1)%f))%f);

    long long inv8 = mod_pow(8, f-2);

    d = ( (a % f) * (b % f) ) % f;
    d = (d * (c % f)) % f;
    d = (d * inv8) % f;

    printf("%lld\n", d);
}
