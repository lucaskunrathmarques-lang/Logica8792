#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>





    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int voto;

    printf("digite o seu voto:");
    scanf("%d", &voto);

    if(voto == 10){
        printf("\nmanuel");
    }else if(voto == 20){
        printf("\nbianca");
    }else if(voto == 30){
        printf("\nclara");
    }else if(voto == 40){
        printf("\nbruno");
    }else if(voto == 50){
        printf("\ntaiana");
    }else{
        printf("voce não escolheu um numero valido");
    }





    return 0;
 
}