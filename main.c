#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int mes;

        printf("Insira em qual mês estamos para saber a estação do ano! (em números de 1 a 12)\n");
        scanf("%d", &mes);

        switch(mes){
	        case 12:
            case 1:
            case 2:
                printf("Verão\n");
                break;

            case 3:
            case 4:
            case 5:
                printf("Outono\n");
                break;

            case 6:
            case 7:
            case 8:
                printf("Inverno\n");
                break;

            case 9:
            case 10:
            case 11:
                printf("Verão\n");
                break;

            default:
                printf("Digito inválido!");
                break;
					

   }

    return 0;
}

