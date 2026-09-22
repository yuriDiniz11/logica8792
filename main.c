#include<stdio.h>
#include<windows.h>

void saudar(const char *nome){
    printf("Olá %s\n", nome);
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   saudar("Yuri");
   saudar("Gonçalves");
   saudar("Diniz");

    return 0;
}