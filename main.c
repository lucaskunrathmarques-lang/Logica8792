#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>








int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    char placa[20] = "";
    int n;


    do{
      printf("\n---- MENu ----\n");
      printf("1 - digite sua placa\n");
      printf("2 - verifique sua placa\n");
      printf("0 - sair");
      printf("escolah uma das apoções acima\n");
      printf("%d", &n);
      
      switch (n)
      {
      case 1:
        printf("digite a placa do veiculo: ");
        scanf("%s", placa);
        printf("placa registrada com sucesso\n");
        break;

      case 2:
        if(strlen(placa) == 0){
          printf("nenhuma placa registrada\n");
        }else{
          printf("placa redistrada: %d\n", placa);
        }
        break;

      case 3:
        printf("saindo do sistema...\n");
        break;
      
      default:
        printf("opção invalida\n");
        break;
      }
    }

    while(n != 3);

      
    
    

    return 0;
 
}