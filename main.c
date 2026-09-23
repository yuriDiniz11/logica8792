#include<stdio.h>
#include<windows.h>
#include<math.h>

void verificarEhParImpar(int n){
    if(n % 2 == 0){
        printf("%d é par!\n");
    }else{
        printf("%d é impar!\n", n);
    }
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    verificarEhParImpar(10);
    verificarEhParImpar(7);

    return 0;
}