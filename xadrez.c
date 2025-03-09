#include <stdio.h>

int main() {
    // Definindo o número de casas para cada movimento
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    
    // Movimento da Torre (linha reta) usando for
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Movimenta a torre para a direita
    }
    
    // Movimento do Bispo (diagonal) usando while
    printf("\nMovimento do Bispo:\n");
    int j = 0; // Inicializando variável de controle
    while (j < casasBispo) {
        printf("Cima, Direita\n"); // Movimenta o bispo para cima e direita ao mesmo tempo
        j++; // Incrementando a variável de controle
    }
    
    // Movimento da Rainha (linha reta para a esquerda) usando do-while
    printf("\nMovimento da Rainha:\n");
    int k = 0; // Inicializando a variavel de controle
    do {
        printf("Esquerda\n"); // Movimenta a rainha para a esquerda
        k++; // Incrementa a variavel de controle
    } while (k < casasRainha); // Repete enquanto k for menor que casasRainha
    
    return 0; // Finaliza o programa
}
