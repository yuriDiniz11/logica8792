#include<stdio.h>
#include<windows.h>
#include<math.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float v[n], soma = 0, media, somaDesvios = 0;

    for(int i = 0; i < n; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
        soma += v[i];
    }
    media = soma / n;
    for(int i = 0; i < n; i++){
        somaDesvios += (v[i] - media) * (v[i] - media);
    }
    float desvioPadrao = sqrt(somaDesvios / n);
    printf("Média: %.2f\n", media);
    printf("Desvio padrão: %.2f\n", desvioPadrao);

    return 0;
}