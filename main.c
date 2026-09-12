#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int segundos, horas, minutos, restos;

    printf("digite a guantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    restos = segundos % 60;

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, restos);

    return 0;
 
}