#include <stdio.h>
#include <string.h>

struct PerRes {
    char pergunta[101];
    char resposta[101];
};

struct PerRes INT(char pergunta[101]) {
    struct PerRes dados;
    strcpy(dados.pergunta, pergunta);
    char alternativas[3][11];
    int i;
    
    for (i = 0; i < 3; i++) {
        fgets(alternativas[i], 11, stdin);
    }
    
    char respostas[3][11];
    
    for (i = 0; i < 3; i++) {
        fgets(respostas[i], 11, stdin);
    }
    
    for (i = 0; i < 3; i++) {
        if (strcmp(respostas[i], "SIM\n") == 0) {
            strcpy(dados.resposta, alternativas[i]);
            break;
        }
    }
    
    return dados;
}

int main() {
    struct PerRes P1, P2, P3, P4, P5;
    char treino[101];
    char pergunta[101];
    
    fgets(treino, 100, stdin);
    
    if (strcmp(treino, "INT\n") == 0) {
        fgets(pergunta, 100, stdin);
        P1 = INT(pergunta);
    }
    
    return 0;
}