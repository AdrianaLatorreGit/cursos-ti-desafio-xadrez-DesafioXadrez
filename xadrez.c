#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

// Função recursiva para mover o Bispo (quantas casas quiser na diagonal)
void moverBispo(int x, int y, int limite, int dx, int dy) {
    if (limite == 0) return;
    printf("Bispo move para (%d, %d)\n", x + dx, y + dy);
    moverBispo(x + dx, y + dy, limite - 1, dx, dy);
}

// Função recursiva para mover a Torre (quantas casas quiser em linha reta)
void moverTorre(int x, int y, int limite, int dx, int dy) {
    if (limite == 0) return;
    printf("Torre move para (%d, %d)\n", x + dx, y + dy);
    moverTorre(x + dx, y + dy, limite - 1, dx, dy);
}

// Função recursiva para mover a Rainha (quantas casas quiser em todas as direções)
void moverRainha(int x, int y, int limite, int dx, int dy) {
    if (limite == 0) return;
    printf("Rainha move para (%d, %d)\n", x + dx, y + dy);
    moverRainha(x + dx, y + dy, limite - 1, dx, dy);
}

// Função para mover o Cavalo (movimentos em L) usando loops aninhados
void moverCavalo(int x, int y) {
    int movimentos[2][2] = {{-2, 1}, {-2, -1}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int nx = x + movimentos[i][0];
            int ny = y + movimentos[j][1];
            printf("Cavalo move para (%d, %d)\n", nx, ny);
            if (j == 1) break;
        }
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= 4; i++) {
        moverBispo(4, 4, i, 1, 1); // Cima, Direita
        moverBispo(4, 4, i, -1, -1); // Baixo, Esquerda
        moverBispo(4, 4, i, -1, 1); // Cima, Esquerda
        moverBispo(4, 4, i, 1, -1); // Baixo, Direita
    }
    
    printf("\nMovimentação da Torre:\n");
    moverTorre(4, 4, 4, 1, 0); // Direita
    moverTorre(4, 4, 4, -1, 0); // Esquerda
    moverTorre(4, 4, 4, 0, 1); // Baixo
    moverTorre(4, 4, 4, 0, -1); // Cima
    
    printf("\nMovimentação da Rainha:\n");
    moverRainha(4, 4, 4, 1, 0); // Direita
    moverRainha(4, 4, 4, -1, 0); // Esquerda
    moverRainha(4, 4, 4, 0, 1); // Baixo
    moverRainha(4, 4, 4, 0, -1); // Cima
    moverRainha(4, 4, 4, 1, 1); // Cima, Direita
    moverRainha(4, 4, 4, -1, -1); // Baixo, Esquerda
    moverRainha(4, 4, 4, -1, 1); // Cima, Esquerda
    moverRainha(4, 4, 4, 1, -1); // Baixo, Direita
    
    printf("\nMovimentação do Cavalo:\n");
    moverCavalo(4, 4);
    
    return 0;
}
