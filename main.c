#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    printf("Digite um n°: ");
    scanf("%d", &n);

    while(n >= 0){
        printf("%d\n", n);
        n--;
    }
    

    return 0;
}