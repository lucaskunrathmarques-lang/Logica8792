#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    

    int soma = 0;
    int i;

    for(i = 1; i <= 100; i++){
        //0 + 1
        //1 + 2
        //3 + 3
        //6 + 4
        //coluna da esquerda é "soma", da direita "i", o valor de "soma" é senpre o valor que ele ganhou apos somar com "i", ou seja s = 0 + I = 1, "s" se torna 1 e isso se repete
        //ate o i chegar ao valor maximo 
        soma = soma + i;
    }

    printf("soma e %d", soma);



    return 0;
 
}