#include <stdio.h>

int main() {
    int it, Di, Az=0, Ver=0;
    char Nver[1001], Naz[1001];

    scanf("%d", &it);

    while (it>0){
        scanf("%d %s %s", &Di, Nver, Naz);

        for (int i=0; i<Di; i++){
            if(Naz[i]>Nver[i]){
                Az++;
            } else if(Nver[i]>Naz[i]){
                Ver++;
            }
        }

        if(Az>Ver){
            printf("BLUE\n");
        } else if(Ver>Az) {
            printf("RED\n");
        } else{
            printf("EQUAL\n");
        }

        it--;
        Az=0;
        Ver=0;
    }

    return 0;
}
