#include <stdio.h>

#define VALOR_X 3

int recebeNumeroDeTestes(int t){
    if(t >= 100){
        return 0;
    }else{
        return 1;
    }
}

int recebeNodeInicial(int n, int x){
    if(n >= x*x){
        return 0;
    }else{
        return 1;
    }
} 

void desenhaMaze(int v, int a){
    // implementação depois
}

int main() {
    struct Par {
        int x;
        int y;
    };

    int t,n,v,a;
    printf("Bem vindo! Aqui desenharemos um labirinto aos seus comandos!\n");

    printf("Insira o valor de numero de testes que você quer que seja feito para o labirinto: ");
    scanf("%d", &t);
    printf("Você digitou t = %d\n", t);

    if (recebeNumeroDeTestes(t) == 0){
        printf("Insira um valor menor que 100\n");
        return 0;
    }

    printf("Insira o valor do node inicial: ");
    scanf("%d", &n);
    printf("Você digitou n = %d\n", n);

    if (recebeNodeInicial(n, VALOR_X) == 0){
        printf("Insira um valor menor que x ao quadrado (x é o tamanho do labirirnto)\n");
        return 0;
    }
    
    printf("Insira o número de vértices e arestas: ");
    scanf("%d %d", &v, &a);
    printf("Você digitou v = %d, a = %d\n", v, a);
    
    struct Par vetor[a-1];
    
    for (int i = 0; i < a; i++) {
        printf("Digite o par de inteiros que formam uma aresta: ");
        scanf("%d %d", &vetor[i].x, &vetor[i].y);  
        printf("Aresta %d: (%d, %d)\n", i+1, vetor[i].x, vetor[i].y);
    }
    
    for (int i = 0; i < a; i++) {
        printf("Aresta %d: (%d, %d)\n", i+1, vetor[i].x, vetor[i].y);
    }
    
    return 0;
}
