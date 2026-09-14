#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int idade;

    printf("digite idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("vocé é maior de idade!");
    }else{
        printf("vocé é menor de idade");
    }

    



    return 0;
 
}