#include <stdio.h>

//Função da Torre

void moverTorre(int passoAtual, int totalCasas) {
    if (passoAtual > totalCasas) return; // Condição de parada da recursão

    printf("Direita (%d)\n", passoAtual);

    // Chamada recursiva
    moverTorre(passoAtual + 1, totalCasas);
}


// Funcão recursiva Rainha 
void moverRainha(int passoAtual, int totalCasas) {
    if (passoAtual > totalCasas) return; // Condição de parada da recursão

    printf("Esquerda (%d)\n", passoAtual);

    // Próxima casa
    moverRainha(passoAtual + 1, totalCasas);
}

// Função recursiva e loops aninhados para o Bispo

void moverBispo(int passoAtual, int totalCasas) {
    if (passoAtual > totalCasas) return;

    printf("Movendo o Bispo na diagonal (%d):\n", passoAtual);

    // Loop aninhado — simula o movimento em diagonal
    for (int vertical = 1; vertical <= 1; vertical++) { // Movimento vertical
        for (int horizontal = 1; horizontal <= 1; horizontal++) { // Movimento horizontal
            printf("Cima, Direita (%d)\n", passoAtual);
        }
    }

    // Chamada recursiva para o próximo movimento
    moverBispo(passoAtual + 1, totalCasas);
}

// Movimento do cavalo 

void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo em 'L':\n");

    int movimentosRealizados = 0;

    for (int i = 1; i <= movimentos; i++) {       // controle de movimentos
        for (int cima = 1; cima <= 2; cima++) {   // duas casas para cima
            if (cima == 2) {
                printf("Cima (%d)\n", cima);
                continue; // vai para horizontal
            }
            printf("Cima (%d)\n", cima);
        }

        // uma casa para a direita
        for (int direita = 1; direita <= 1; direita++) {
            printf("Direita (%d)\n", direita);
        }

        movimentosRealizados++;

        // Se já fez todos os movimentos, encerra
        if (movimentosRealizados >= movimentos) {
            break;
        }

        printf("---\n"); // separador 
    }

    printf("Fim do movimento do Cavalo!\n");
}


// Função principal (main)

int main() {
    // Quantidade de casas/movimentos definidos no código em si
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    printf("Movimento da Torre \n");
    moverTorre(1, casasTorre);
    printf("\n");

    printf("Movimento do Bispo \n");
    moverBispo(1, casasBispo);
    printf("\n");

    printf("Movimento da Rainha \n");
    moverRainha(1, casasRainha);
    printf("\n");

    printf("Movimento do Cavalo\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    printf("Desligando...\n");
    return 0;
}
