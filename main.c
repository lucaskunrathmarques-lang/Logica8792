#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


float lerp(char mansagem[]){
  float valor;
  do{
    printf("%s", mansagem);
    scanf("%f", &valor);

    if(valor <= 0){
      printf("valor invalido! digite um numero maior que 0.\n");
    }
  }while(valor <= 0);
  return valor;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    float idade = lerp("digite a idade:");
    float peso = lerp("digite o peso (kg): ");
    float altura = lerp("digite a altura (m):");

    printf("\nidade: %.1f anos\n", idade);
    printf("IMC: %f\n", peso / (altura * altura));
    





      
    
    

    return 0;
 
}