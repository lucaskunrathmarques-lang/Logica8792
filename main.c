#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Antecessor: %d\n", n - 1);
    printf("Sucessor: %d\n", n + 1);

    int m = n - 1;

    printf("multiplicação: %d\n", (n * m));



    return 0;
 
}