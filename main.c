#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int senha = 1234;
    int tentativas;

    printf("Digite sua senha: ");
    scanf("%d", &tentativas);

    while(tentativas != senha){
        printf("Senha errada! Digite a senha correta: ");
        scanf("%d", &tentativas);
    }
    printf("Senha correta! Bem-vindo ao sistema!\n");    

    return 0;
}