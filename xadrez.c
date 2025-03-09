#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    // Definindo o número de casas para cada movimento
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavaloVertical = 2; // Duas casas para cima
    int casasCavaloHorizontal = 1; // Uma casa para a direita
    
    // Movimento da Torre usando recursividade
    printf("\nMovimento da Torre:\n");
    moverTorre(casasTorre);
    
    // Movimento do Bispo usando recursividade
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);
    
    // Movimento da Rainha usando recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);
    
    // Movimento do Cavalo (em "L") usando loops aninhados e condições
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0, j = 0; i < casasCavaloVertical || j < casasCavaloHorizontal; ) {
        if (i < casasCavaloVertical) {
            printf("Cima\n");
            i++;
            continue;
        }
        if (j < casasCavaloHorizontal) {
            printf("Direita\n");
            j++;
        }
    }
    
    return 0; // Finaliza o programa
}
