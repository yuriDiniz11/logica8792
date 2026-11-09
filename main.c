#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int potencia(int base, int expoente){
    int resultado = 1;
    for(int i = 0; i < expoente; i++){
        resultado *= base;
    }
    return resultado;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    

    printf("2 elevado a 5 = %d\n", potencia(2, 5));

    return 0;
}