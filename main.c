#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n1, n2, n3, maior;

    printf("Digite trÊs valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior = n1;

    maior = (n2 > maior) ? n2 : maior;
    maior = (n3 > maior) ? n3 : maior;
   
    printf("O maior é %d.\n", maior);

    return 0;
}