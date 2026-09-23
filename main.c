#include<stdio.h>
#include<windows.h>
#include<math.h>

void fibonacci(int termos){
    int a = 0, b = 1, c;
    printf("Sequência de Fibonacci (%d termos): ", termos);
    for(int i = 1; i <= termos; i++){
        printf("%d", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    fibonacci(10);

    return 0;
}