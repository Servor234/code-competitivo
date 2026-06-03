#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c, d=0;
    scanf("%d", &a);
    while(a>0){

       scanf("%d %d", &b,&c);
       c+=b;

       d=((b+b+c-1)*c)/2;


       if(d%2==0){
        printf("Yes\n");
       }else{
        printf("No\n");
       }

       d=0;
        a--;
    }
}
