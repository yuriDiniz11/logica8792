#include<stdio.h>
#include<windows.h>
#include"funcoes.h"

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("Resultado: %d\n", soma(6, 5));

    return 0;
}