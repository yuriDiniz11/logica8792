#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   char nomes[5][20] = {"Ronaldo", "Ronaldinho", "Ronaldão", "Ronaldowsky", "Ronald"};

    printf("%s\n", nomes[0]);
    printf("%s\n", nomes[1]);
    printf("%s\n", nomes[2]);
    printf("%s\n", nomes[3]);
    printf("%s\n", nomes[4]);

    printf("\nConvocados da seleção de futsal!!");

    return 0;
}