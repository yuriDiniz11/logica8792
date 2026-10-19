#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int conta = 1;


    while(conta <= 10){
    for(int i = 1; i <= 10; i++){
        printf("%d\n", i);
        conta++;
     }
    }
    

    return 0;
}