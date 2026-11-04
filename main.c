#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int m[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int t[3][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            t[j][i] = m[i][j];
        }
    }
    printf("Original (2x3)\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\nTransposta (3x2):\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}