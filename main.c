#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int MAX_TENTATIVAS = 7; 
    int tentativas[MAX_TENTATIVAS];
    int secreto, palpite;
    int usadas = 0, acertou = 0;

    srand(time(NULL));

    secreto = rand() % 100 + 1;

    printf("Advinhe o n° entre 0 e 100.\n");
    printf("Você tem %d tentativas.\n", MAX_TENTATIVAS);

    do{
        printf("\nTentativa %d: ", usadas + 1);
        scanf("%d", &palpite);

        if(palpite < 1 || palpite > 100){
            printf("Digite um n° entre 1 e 100!\n");
        }else{
            tentativas[usadas] = palpite;
            usadas++;
            if(palpite == secreto){
                acertou = 1;
            }else if(palpite < secreto){
                printf("O n° secreto é MAIOR!\n");
            }else{
                printf("O n° secreto é MENOR!\n");
            }
        }
    }while(!acertou && usadas < MAX_TENTATIVAS);
    printf("\n---- GAME OVER ----\n");

    if(acertou != 0){
        printf("Parabéns! Você acertou em %d tentativa(s).\n", usadas);
    }else{
        printf("Suas tentativas acabaram. O n° era %d.\n", secreto);
    }
    printf("Histórico de palpites:\n");

    for(int i = 0; i < usadas; i++){
        printf("%d %d\n", i + 1, tentativas[i]);
    }

    return 0;
}