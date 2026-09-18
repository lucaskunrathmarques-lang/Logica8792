#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    

   int opcao;

   printf("--- SISTEMA DE PEDAGIO ---\n");
   printf("1 - moto\n");
   printf("2 - carro passeio\n");
   printf("3 - caminhão\n");
   printf("4 - onibus\n");
   scanf("%d", &opcao);

   switch (opcao)
   {
        case 1:
            printf("categoria moto | tarifa R$5.00\n");
            break;
        case 2:
            printf("categoria carro passeio | tarifa R$10.00\n");
            break;
        case 3:
            printf("categoria caminhão | tarifa R$25.00\n");
            break;
        case 4:
           printf("categoria anibus | tarifa R$20.00\n");
           break;
        default:
            printf("erro: categoria não cadastrada no sistema");
            break;
   }
    

    return 0;
 
}