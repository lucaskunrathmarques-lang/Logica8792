#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>




int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int D = 7;
    float temp[D];
    float soma = 0, media;
    float maior, menor;
    int dmaior = 1, dmenor = 1;
    int aMedia = 0;

    for(int i = 0; i < D; i++){
      printf("temperatura do dia %d:", i + 1);
      scanf("%f", &temp[i]);
      soma += temp[i];
    }

    media = soma / D;
    maior = temp[0];
    menor = temp[0];

    for(int i = 1; i < D; i++){
      if(temp[i] > menor){
        maior = temp[i];
        dmaior = i + 1;
      }
      if(temp[i] < menor){
        menor = temp[i];
        dmenor = i + 1;
      }
    }

    for(int i = 0; i < D; i++){
      if(temp[i] > media){
        aMedia++;
      }
    }

    printf(" \n ----- Temperatura -----\n");

    for(int i = 0; i < D; i++){
      printf("Dia %d: %.1f\n", i + 1, temp[i]);
    }

    printf("\nMedia da semana: %.1f\n", media);
    printf("Maior: %.1f (dia %d)\n", maior, dmaior);
    printf("Menor: %.1f (dia %d)\n", menor, dmenor);
    printf("Dias acima da media: %d\n", aMedia);
    

    
    

    return 0;
 
}