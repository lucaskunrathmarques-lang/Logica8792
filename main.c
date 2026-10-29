#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


char* TipoV(char placa[]){
  char primeiro = placa[0];

  if(primeiro >= 'A' && primeiro <= '2'){
    return "veicilo particular";
  }else if(primeiro >= '0' && primeiro <= '9'){
    return "placa irregular";
  }else{
    return "formato desconhecido";
  }
}





int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int o;
    char placa[20];

    printf("\n----- SISTEMA DE TRANSITO ------\n");
    printf("digite os caracteres da placa do veiculo: ");
    scanf("%s", &placa);

    do{
      printf("\n1 - ver placa | 2 - Tipo de veiculo | 0 - sair:\n");
      scanf("%d", &o);

      switch (o)
      {
      case 1:
        printf("Placa do veiculo: %s\n", placa);
        break;

      case 2:
        printf("tipo: %s\n", TipoV(placa));
        break;

      case 0:
        printf("saindo...\n");
        break;
      
      default:
        printf("Numeor invalido");
        break;

      }
    }

    while(o != 0);

    printf("fim do programa\n");

      
    
    

    return 0;
 
}