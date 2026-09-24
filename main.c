#include<stdio.h>
#include<windows.h>
#include<math.h>

void contarVogais(char palavras[]){
    int contador = 0;
    for(int i = 0; i <strlen(palavras); i++){
        char c = palavras[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I'|| c == 'O' || c == 'U'){
            contador++;
        }
    } //strlen calcula os caracteres de uma palavra.
    printf("A palavra '%s' tem %d vogais.\n", palavras, contador);
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char palavra[20];

    printf("Digite uma palavra para saber as vogais! ");
    scanf("%s", palavra);

    contarVogais(palavra);

    return 0;
}