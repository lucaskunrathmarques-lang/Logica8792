#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>

#define QTD 5

void cd(float notas[]){
  for(int i = 0; i < QTD; i++){
    printf("digite a nota do aluno %d: ", i + 1);
    scanf("%f", &notas[i]);
  }
}    

void ms(float nota[]){
  for(int i = 0; i < QTD; i++){
    printf("aluno %d: %.1f\n", i + 1, nota[i]);
  }
}

float cm(float notas[]){
  float soma = 0;
  for(int i = 0; i < QTD; i++){
    soma += notas[i];
  }
  return soma / QTD;
}

float mn(float notas[]){
  float maior = notas[0];
  for(int i = 1; i < QTD; i++){
    if(notas[i] > maior){
      maior = notas[i];
    }
  }
  return maior;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
    float notas[QTD];
    int opcao;
    int cadastrado = 0;

    do{
      printf("\n-----Controle de Notas-----\n");
      printf("1 - CADASTRAR NOTAS\n");
      printf("2 - MOSTRAR NOTAS\n");
      printf("3 - MÉDIA DA TURNMA");
      printf("4 -  MAIOR NOTA\n");
      printf("0 - SAIR\n");
      printf("Escolha: ");
      scanf("%d", &opcao);

      switch (opcao)
      {
        case 1:
          cd(notas);
          cadastrado = 1;
          break;
      
        case 2: 
          if(cadastrado){
            ms(notas);
          }else{
            printf("Nenhuma nota cadastrada ainda.\n");
          }
          break;

        case 3:
          if(cadastrado){
            printf("Media da turma: %.1f\n", cm(notas));
          }else{
            printf("Nenhuma nota cadastrada ainda.\n");
          }
          break;

        case 4:
          if(cadastrado){
            printf("maior nota: %.1f\n", mn(notas));
          }else{
            printf("Nenhuma nota cadastrada ainda.\n");
          }
          break;

        case 0:
          printf("Até mais\n");
          break;

      default:
        printf("Opção invalida");
        break;
      }
    }
    
    while(opcao != 0);

    
    

    return 0;
 
}