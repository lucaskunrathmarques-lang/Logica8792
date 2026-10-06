#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero;
    int sucesso;

    do{
        printf("digite um numero maior que 0: ");
        sucesso = scanf("%d", &numero);

        if(sucesso != 1){
            printf("entrada invalida! digite apenas numeros inteiros.\n");
            while(getchar() != '\n');
            numero = 0;
        }
    }while (numero <= 0);

    printf("voce digitou %d, que é valido\n", numero);
      
    


    return 0;
 
}