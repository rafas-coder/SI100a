#include <stdio.h>
#include <string.h>

// Estrutura que armazena informações de uma pergunta e resposta
struct PerRes {
    int controle;                // Tipo de resposta: 0 para inteiro, 1 para ponto flutuante
    char pergunta[121];          // Texto da pergunta
    int respostaint;             // Resposta como número inteiro
    double respostafloat;        // Resposta como número de ponto flutuante
};

// Função para coletar resposta do tipo inteiro
struct PerRes INT(char pergunta[120]) {
    struct PerRes dados;
    int i;
    dados.controle = 0;
    dados.respostafloat = 0;
    strcpy(dados.pergunta, pergunta);
    int alternativas[5];
    char respostas[3][10];
    
    for(i = 0; i < 3; i++) {
        scanf("%d", &alternativas[i]);
    }
    
    fgets(respostas[i], 9, stdin);
    
    for(i = 0; i < 3; i++) {
        fgets(respostas[i], 9, stdin);
        printf("Alternativa correta eh %d?\n", alternativas[i]);
        
        if (strcmp(respostas[i], "SIM\n") == 0) {
            dados.respostaint = alternativas[i];
            return dados;
        }
    }
}

// Função para coletar resposta do tipo ponto flutuante
struct PerRes FLOAT(char pergunta[120]) {
    struct PerRes dados;
    int i;
    dados.controle = 1;
    dados.respostaint = 0;
    strcpy(dados.pergunta, pergunta);
    double alternativas[5];
    char respostas[3][11];
    
    for(i = 0; i < 3; i++) {
        scanf("%lf", &alternativas[i]);
    }
    
    fgets(respostas[i], 9, stdin);
    
    for(i = 0; i < 3; i++) {
        printf("Alternativa correta eh %.2lf?\n", alternativas[i]);
        fgets(respostas[i], 10, stdin);
        
        if (strcmp(respostas[i], "SIM\n") == 0) {
            dados.respostafloat = alternativas[i];
            return dados;
        }
    }
}

int main() {
    struct PerRes Per[5];         // Array para armazenar perguntas e respostas
    char controle[121];			  // Variável inútil
    char pergunta[121];           // Variável para armazenar a pergunta atual
    int i = 0;
    int k = 0;
    
    printf("---Etapa de treinamento---\n");
    
    fgets(pergunta, 120, stdin);  // Coleta a primeira pergunta
    
    while(strcmp(pergunta, "FIM\n") != 0) {  // Continua até receber "FIM\n"
        if (strcmp(pergunta, "INT\n") == 0) {  // Se for uma pergunta do tipo inteiro
            fgets(pergunta, 120, stdin);       // Coleta a pergunta
            Per[i] = INT(pergunta);            // Chama a função INT para coletar a resposta
            i++;                               // Incrementa o índice do array Per
        }
        
        if (strcmp(pergunta, "FLOAT\n") == 0) {  // Se for uma pergunta do tipo ponto flutuante
            fgets(pergunta, 120, stdin);          // Coleta a pergunta
            Per[i] = FLOAT(pergunta);             // Chama a função FLOAT para coletar a resposta
            i++;                                  // Incrementa o índice do array Per
        }
        
        fgets(pergunta, 120, stdin);  // Coleta a próxima pergunta
    }
   
    printf("---Etapa de testes---\n");
    fgets(pergunta, 120, stdin); 
    
    while(strcmp(pergunta, "FIM\n") != 0) {  // Continua até receber "FIM\n"
        for(i = 0; i < 6; i++) {             // Percorre o array Per
            if (i == 5) {                    // Se todas as perguntas foram verificadas
                printf("Me desculpe, ainda não fui treinado para responder essa pergunta.\n");
            }
            
            if (strcmp(pergunta, Per[i].pergunta) == 0 && Per[i].controle == 0) {  // Se a pergunta é do tipo inteiro
                printf("A resposta eh: %d\n", Per[i].respostaint);
                break;
            }
            
            if(strcmp(pergunta, Per[i].pergunta) == 0 && Per[i].controle == 1) {  // Se a pergunta é do tipo ponto flutuante
                printf("A resposta eh: %.2f\n", Per[i].respostafloat);
                break;
            }
        }
        
        fgets(pergunta, 120, stdin);  // Coleta a próxima pergunta
    }
    
    return 0;
}
