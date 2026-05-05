#include <stdio.h>

int main(){
    int it,Az=0,Ver=0,Nver,Naz,Di,Taz[1000],Tver[1000], cou=0;

    scanf("%d", &it);

    while(it>0){
     scanf("%d %d %d", &Di, &Nver, &Naz);

     while(Nver>0){
        Tver[cou]=Nver%10;
        Nver/=10;
        cou++;
     }
     cou=0;

     while(Naz>0){
        Taz[cou]=Naz%10;
        printf("%d\n", Taz[cou]);
        Naz/=10;
        cou++;
     }
     cou=0;

     for(int i=Di-1; i>0;i--){
        if(Taz[i]>Tver[i]){
            printf("%d %d %d\n", Taz[i], Tver[i], i);
            Az++;
        }else if(Tver[i]>Taz[i]){
            printf("%d %d %d\n", Tver[i], Taz[i], i);
            Ver++;
        }else{
            printf("%d %d %d\n", Tver[i], Taz[i], i);
        }
     }
     //09281

     if(Az>Ver){
        printf("BLUE\n");
     }else if(Ver>Az){
        printf("RED\n");
     }else{
        printf("EQUAL\n");
     }

     Az=0;
     Ver=0;
     it--;
    }
}
