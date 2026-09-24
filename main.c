#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, soma = 0;

    printf("digite um numero:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += i;
    }
    printf("o resultado da soma é: %d\n", soma);
    






    return 0;
 
}