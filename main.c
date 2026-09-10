#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

    int a;
    int b = 19;

    printf("Digite um valor para a: ");
    scanf("%d", &a);

    printf("A soma é: %d\n", (a + b));
    printf("A subtração é: %d\n", (a - b));
    printf("A multiplicação é: %d\n", (a * b));
    printf("A divisão é: %d\n", (a / b));



    return 0;
 
}