#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int o = 1;

    while (o != 0)
    {
        printf("\nmenu: \n");
        printf("1 - depositar\n");
        printf("2 - sacar\n");
        printf("3 - consultar\n");
        printf("0 - sair\n");
        printf("escolha: ");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            printf("voce escolheu depositar\n");
            break;
        case 2:
            printf("voce estcolheu sacar\n");
            break;
        case 3:
            printf("voce escolheu consultar\n");
            break;
        case 0:
            printf("saindo...");
            break;
        default:
            printf("opção invalida\n");
            break;
        }

    }
    






    return 0;
 
}