#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int idade;

    printf("digite idade: ");
    scanf("%d", &idade);

    if(idade >= 50){
        printf("vocé é um seior");
    }else if(idade >= 18){
        printf("Voce é maior de idade");
    }else if(idade >= 12){
        printf("voce é um adolecente");
    }else if(idade >= 9){
        printf("voce é um pre-adolecente");
    }else{
        printf("voce é uma criança");
    }
    

    



    return 0;
 
}