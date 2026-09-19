#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    

   float peso, altura, imc;

   printf("digite um pedo (kg):");
   scanf("%f", &peso);

   printf("digite a altura (m)");
   scanf("%f", &altura);

   imc = peso / (altura + altura);

   if(imc < 18.5){
    printf("classificação: abaixo do peso\n");
   }else if(imc < 25){
    printf("classificação: peso normal\n");
   }else if(imc < 30){
    printf("classificação: acima do peso\n");
   }else{
    printf("classificação: obesidade\n");
   }

    

    return 0;
 
}