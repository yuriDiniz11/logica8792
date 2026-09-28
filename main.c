#include<stdio.h>
#include<windows.h>

int main(){

    

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }


    return 0;
}