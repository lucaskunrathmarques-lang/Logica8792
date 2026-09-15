#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b, c, d, e, menor, maior;

    printf("digite um numero para a:");
    scanf("%d", &a);

    printf("digite um numero para b:");
    scanf("%d", &b);

    printf("digite um numero para c: ");
    scanf("%d", &c);

    printf("digite um numero para d: ");
    scanf("%d", &d);

    printf("digite um numero para e: ");
    scanf("%d", &e);

    menor = a;

    if(b < menor) menor = b;
    if(c < menor) menor = c;
    if(d < menor) menor = d;
    if(e < menor) menor = e;

    // if(b > maior) maior b
    //esta "perguntando" se b é maior que "maior"/"a"
    //se for maior a varialvel "maior" se torna "b"


    printf("menor: %d\n", menor);
    
    maior = a;

    if(b > maior) maior = b;
    if(c > maior) maior = c;
    if(d > maior) maior = d;
    if(e > maior) maior = e;

    printf("maior: %d\n", maior);  
    



    return 0;
 
}