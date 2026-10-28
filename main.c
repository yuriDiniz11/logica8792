#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void mostrarNumero(int numero){
    printf("Número: %d\n", numero);
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    mostrarNumero(40);

    return 0;
}