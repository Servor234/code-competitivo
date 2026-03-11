int main(){
    int testes = 0;
    scanf("%d", &testes);

    while(testes > 0) {
        int qtd_pontos = 0;
        int pontos[50];
        scanf("%d", &qtd_pontos);

        for(int i = 0; i < qtd_pontos; i++) {
            scanf("%d", &(pontos[i]));
        }
        for(int i = 0; i < qtd_pontos; i++) {
            printf("[%d] - %d\n", i, pontos[i]);
        }
        // Solução vem aqui

        testes--;
    }
    return 0;
}
