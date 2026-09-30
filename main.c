#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, primo = 1;    //2, 3, 5, 7, 11, 13

    printf("Digite um n° para n: ");
    scanf("%d", &n);

    if(n < 2){
        primo = 0;
    }else{
            for(int i = 2; i < n; i++){
                if(n % i == 0){
                    primo = 0;
                    break;
                }
            }
    }
    if(primo){
        printf("%d é primo\n", n);
    }else{
        printf("%d não é primo", n);
    }
    
    return 0;
}