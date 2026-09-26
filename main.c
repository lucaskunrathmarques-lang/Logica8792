#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>




    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int o;
    float a, b;

    do{
        printf("\n---MENU---\n");
        printf("1 - soma\n");
        printf("2 - subtração\n");
        printf("3 - multiplicador\n");
        printf("4 - divisao\n");
        printf("0 - sair\n");
        printf("escolha um opção:");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            printf("digite dois numeros:");
            scanf("%f %f", &a, &b);
            printf("resultado: %.f\n", a + b);
            break;
       
        case 2:
            printf("digite dois numeros:");
            scanf("%f %f", &a, &b);
            printf("resultado: %.2f\n", a - b);
            break;
        
        case 3:
            printf("digite dois numeros:");
            scanf("%f %f", &a, &b);
            printf("resultado: %.2f\n", a * b);
            break;
        
        case 4:
            printf("digite dois numeros:");
            scanf("%f %f", &a, &b);
            if(b != 0){
                printf("resultado: %.2f\n", a / b);
            }else{
                printf("erro: divisao por zero\n");
                break;
            }
        
        case 0:
            printf("saindo...");
            break;

        default:
            printf("opçao invalida\n");
            break;
        }
    }while(o != 0);





    return 0;
 
}