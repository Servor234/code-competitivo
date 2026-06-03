#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        long long n, k;
        scanf("%lld %lld", &n, &k);

        long long a = n;
        long long b = n + k - 1;

        long long soma = (a + b) * k / 2;

        if(soma % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
