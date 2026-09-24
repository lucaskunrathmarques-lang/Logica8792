#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero, soma = 0;

    printf("digite um numero para somar (0 encerra): ");
    scanf("%d\n", &numero);

    while (numero != 0)
    {
        soma += numero;
        scanf("%d\n", &numero);
    }
    printf("soma total = %d\n", soma);
    






    return 0;
 
}