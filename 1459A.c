#include <stdio.h>

int main(){
    int it,Az=0,Ver=0,Di,Taz[1000],Tver[1000], cou=0;
    long long Nver,Naz;

    scanf("%d", &it);

    while(it>0){
     scanf("%d %lld %lld", &Di, &Nver, &Naz);

     cou=Di-1;
     while(cou>=0){
        Tver[cou]=Nver%10;
        cou--;
        Nver/=10;
     }
     cou=Di-1;

     while(cou>=0){
        Taz[cou]=Naz%10;
        cou--;
        Naz/=10;
     }
     cou=0;

     for(int i=Di-1; i>=0;i--){
        if(Taz[i]>Tver[i]){
            Az++;
        }else if(Tver[i]>Taz[i]){
            Ver++;
        }
     }
     //09281

     if(Az>Ver){
        printf("BLUE\n");
     }else if(Ver>Az){
        printf("RED\n");
     }else if(Ver==Az){
        printf("EQUAL\n");
     }

     Az=0;
     Ver=0;
     it--;
    }
}

}
