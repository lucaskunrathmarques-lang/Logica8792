#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int Max_Ten = 7;
    int Tentativas[Max_Ten];
    int secreto, palpites;
    int usadas = 0, acertou = 0;

    srand(time(NULL));

    secreto = rand() % 100 + 1;

    printf("adivinhe o numero entre 1 e 100.\n");
    printf("voce tem %d tentativas.\n", Max_Ten);

    do
    {
      printf("\ntentativas %d\n", usadas + 1);
      scanf("%d", &palpites);

      if(palpites < 1 || palpites > 100){
        printf("digite um numero entre 1 e 100");
      }
      else{
        Tentativas[usadas] = palpites;
        usadas++;

        if(palpites == secreto){
          acertou = 1;
        }
        else if(palpites < secreto){
          printf("\no numero secreto é MAIOR!\n");
        }
        else{
          printf("\no numero secreto é MENOR!\n");
        }
      }
    }

    while(!acertou && usadas < Max_Ten);

    printf("\n--- Fim de Jogo ---\n");

    if(acertou){
      printf("parabens! voce acretou em %d tentativas.\n", usadas);
    }
    else{
      printf("Suas tentativas acabaram. o numero era %d.\n", secreto);
    }

    printf("Historico de palpites:\n");

    for(int i = 0; i < usadas; i++){
      printf("%d %d\n", i + 1, Tentativas[i]);
    }
    
    

    return 0;
 
}