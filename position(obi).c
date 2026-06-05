#include <stdio.h>

int main(){
    char l[6];
    int c=0;

    for(int i=0;i<6;i++){
        scanf(" %c", &l[i]);
        if(l[i]=='V'){
            c++;
        }
    }

    if(c==1 || c==2){
        printf("3\n");
    }else if(c==3 || c==4){
        printf("2\n");
    }else if(c==5 || c==6){
        printf("1\n");
    }else{
        printf("-1\n");
    }



}
