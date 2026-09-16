#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int diaDeSemana;

    printf("digite um unmero de (1 a 7): ");
    scanf("%d", &diaDeSemana);

    if(diaDeSemana == 1){
        printf("domingo");
    }else if(diaDeSemana == 2){
        printf("segunda-feira");
    }else if(diaDeSemana == 3){
        printf("terça-feira");
    }else if(diaDeSemana == 4){
        printf("quarta-feira");
    }else if(diaDeSemana == 5){
        printf("quinta-feira");
    }else if(diaDeSemana == 6){
        printf("sexta-feira");
    }else if(diaDeSemana == 7){
        printf("sabado");
    }

    return 0;
 
}