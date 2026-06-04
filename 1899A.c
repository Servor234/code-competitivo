#include <stdio.h>

int main(){
    int c=0, b=0;

    scanf("%d", &c);

    for(int i=c;i>0;i--){

        scanf("%d", &b);

        if(b%3==0){
            printf("Second\n");
        }else if((b+1)%3==0 || (b-1)%3==0){
            printf("First\n");
        }else{
            printf("Second\n");
        }

    }

}
