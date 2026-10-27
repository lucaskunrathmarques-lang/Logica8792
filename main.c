#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int cartela[5] = {3, 8, 12, 15, 10};
    int sorteado[21] = {0};
    int acerto = 0, rodadas = 0, bola;

    srand(time(NULL));

    while(acerto < 5){
      do{
        bola = rand() % 20 + 1;
      }
      
      while(sorteado[bola]);
      sorteado[bola] = 1;
      rodadas++;

      printf("bola %d: %d\n", rodadas, bola);

      for(int i = 0; i < 5; i++){
        if(cartela[i] == bola){
          acerto++;
          printf("acertou o %d! (%d de 5)\n", bola, acerto);
        }
      }
    }
    
    

    return 0;
 
}