#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int contador = 0;

    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            for(int k = 0; k <= 9; k++){
                for(int l = 0; l <= 9; l++) // primeiro executa essa linha até 9, depois executa as outras chaves
                    printf("Possíveis resultados do cadeado: %d %d %d %d\n", i, j, k, l);
            }
        }
    }

    printf("o n° total de interações: %d\n", contador);

    return 0;
}