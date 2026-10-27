#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void exibirMatriz(int m[2][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int m[2][2] = {
        {1, 2},
        {3, 4}
    };
    exibirMatriz(m);    

    return 0;
}