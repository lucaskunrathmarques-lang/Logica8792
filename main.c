#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int buscar(float vetor[], int tamanho, float chave){
  for(int i = 0; i < tamanho; i++){
    if(vetor[i] == chave){
      return 1;
    }
  }
  return -1;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    float numero[] = {10.5, 20.5, 30.5, 40.5, 50.5};
    int tamanho = 5;
    float procurado;

    printf("digite o numero que deseja procurar: ");
    scanf("%f", &procurado);

    int resultado = buscar(numero, tamanho, procurado);

    if(resultado  != -1){
      printf("numero encontrado!\n");
      printf("valor: %.2f\n", numero[resultado]);
      printf("posição do vetor: %d\n", resultado);
    }else{
      printf("numero nao encontrado!\n");
    }
    





      
    
    

    return 0;
 
}