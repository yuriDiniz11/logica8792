#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int maiorDeTres(int a, int b, int c){
    int maior = a;

    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    return maior;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    

    int a1, b1, c1;

    printf("Digite três valores: ");
    scanf("%d %d %d", &a1, &b1, &c1);

    printf("Maior: %d\n", maiorDeTres(a1, b1, c1));
    
    return 0;
}