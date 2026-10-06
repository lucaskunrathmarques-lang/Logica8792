#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero;

    do{
        printf("digite um numero maior que 0: ");
        scanf("%d", &numero);
    }while(numero <= 0);
    
    printf("voce digitou %d, que é valido\n", numero);
      
    


    return 0;
 
}