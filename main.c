#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

float areaRetangulo(float base, float altura){
    return base * altura;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("Área: %.2f\n", areaRetangulo(5, 3.5));

    return 0;
}