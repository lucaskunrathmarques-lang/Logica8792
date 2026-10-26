#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int lançamentos = 10;
    int dados[lançamentos];
    int soma = 0;
    int seis = 0;

    srand(time(NULL));

    for(int i = 0; i < lançamentos; i++){
      dados[i] = rand() % 6 + 1;
      soma += dados[i];

      if(dados[i] == 6){
        seis++;
      }
    }

    printf("resultados dos lançamentos:\n");

    for(int i = 0; i < lançamentos; i++){
      printf("Lançamentos %d: %d\n", i + 1, dados[i]);
    }

    printf("\nSoma: %d\n", soma);
    printf("quantidade de vezes que saiu 6: %d\n", seis);
    
    

    return 0;
 
}