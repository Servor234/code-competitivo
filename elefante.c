#include <stdio.h>

int main(){
    int x, y, m;

    scanf("%d", &x);

    while (x>=5){
      printf("%d\n", x);
       y=x-5;
       x=y;
       m++;
    }
    if(x>=4){
        y=x-4;
        x=y;
        m++;
        printf("%d\n", x);
    } else if(x>=3){
        y=x-3;
        x=y;
        m++;
        printf("%d\n", x);
    } else if(x>=2){
        y=x-2;
        x=y;
        m++;
        printf("%d\n", x);
    } else if(x>=1){
        y=x-1;
        x=y;
        m++;
        printf("%d\n", x);
    }


    printf("tamanho do elefante:%d", m);
}
