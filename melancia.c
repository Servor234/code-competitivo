#include <stdio.h>

int main() {
    int M;

    scanf("%d", &M);

    if(M%2==0 && M>2){
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
