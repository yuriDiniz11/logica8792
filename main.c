#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int num;
    
    printf("Digite um n°: ");
    scanf("%d", &num);

    if(num > 3){
        printf("Digite um n° de 0 a 3!");
    }else{  
        switch (num){
        case 1:
            printf("Você digitou o n° um!");   
            break;
        
        case 2:
            printf("Você digitou o n° dois!");
            break;

        case 3: 
            printf("Você digitou n° três!");
            break;

        default:
            printf("Digite um n° menor que 4 e maior que 0!");
            break;
    }
    }

    return 0;
}