#include<stdio.h>
#include<windows.h>

int votosA = 0;
int votosB = 0;
int votosNulos = 0;

void votar(int numero){
    if(numero == 1){
        votosA++;
        printf("Você votou no candidato A.");
    }else if(numero == 2){
        votosB++;
        printf("Você votou no candidato B.");
    }else if(numero == 3){
        votosNulos++;
        printf("Os votos foram nulos!");
    }else{
        printf("Voto inválido!");
    }
}

void resultado(){
    printf("\n===== Resultado da votação =====\n");
    printf("Candidatos A: %d votos\n", votosA);
    printf("Candidato B: %d votos\n", votosB);
    printf("Nulos: %d votos\n", votosNulos);

    if(votosA > votosB){
        printf(">>>> Candidato A venceu!!");
    }else if( votosB > votosA){
        printf(">>>> Candidato B venceu!!");
    }else if(votosNulos > votosA/votosB){
        printf("Tiveram mais votos nulos!!");
    }else{
        printf(">>>> EMPATE!! <<<<");
    }
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int voto;
    int totalEleitores = 5;

    for(int i = 0; i < totalEleitores; i++){
        printf("\nEleitor %d - Digite 1 para A, 2 para B, 3 para Nulo: ", i + 1);
        scanf("%d", &voto);
        votar(voto);
    }

    resultado();

    return 0;
}