#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
    int p;

    printf("digite um numero: ");
    scanf("%d", &p);

    switch (p)
    {
      case 1:
        printf("voce digitou: %d", p);
        break;

      case 2:
        printf("voce digito: %d", p);
        break;

      case 3:
        printf("voce digitou: %d", p);
        break;

      default:
        printf("Numero invalida\n");
        break;
    }
    
    
    
    

    


    return 0;
 
}