#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    printf("Quantos nomes deseja digitar? ");
    scanf("%d", &n);

    char nomes[n][50];  //n é o valor digitado pelo usuário e 50 é a quantidade de caracteres 

    for(int i = 0; i < n; i++){                 //laço usado para aparecer: SEGUE LINHA ABAIXO
        printf("Digite o nome %d: ", i + 1);    //Digite o nome 1: ... nome 2: ... nome 3: ..........
        scanf("%s", nomes[i]);                  //lê os nomes e armazena
    }

    for(int i = 0; i < n - 1; i++){         //
        for(int j = 0; j < n - 1; j++){     //laço para calcular os valores dos caracteres pela tabela ASCII, pela primeira letra por isso sabe ordem alfabetica
            if(strcmp(nomes[j], nomes[j + 1]) > 0){ //se a raiz quadrada de (nomes[j], nomes [j + 1]) for MAIOR que 0 (strcmp compara as strings se são iguais ou não)
                char temp[50];                      //declaração de variavel temp com [50] caracteres máximos (temp de temporário, guarda o valor POR ENQUANTO)
                strcpy(temp, nomes[j]);             //copia o conteúdo/valor da string (temp & nomes[j])
                strcpy(nomes[j], nomes[j + 1]);     //copia valor de (nomes[j], nomes [j +1])
                strcpy(nomes[j + 1], temp);         //copia valor de (nome[j + 1], temp)
            }
        }
    }
    printf("Nomes em ordem alfabetica: \n");
    for(int i = 0; i < n; i++){
        printf("%s\n", nomes[i]);
    }

    return 0;
}