#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int somarDigitos(int numero){
    if(numero == 0){
        return 0;
    }
    return (numero % 10) + somarDigitos(numero / 10);
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("Soma: %d\n", somarDigitos(1234));

    return 0;
}