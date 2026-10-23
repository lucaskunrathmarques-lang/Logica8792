#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
    int p ;

    printf("digite um numero: ");
    scanf("%d", &p);

    
    

    switch (p)
    {
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
      case 1:
        printf("Esse mes tem 31 dias");
        break;

      case 4:
      case 11:
      case 9:
      case 6:
        printf("Esse mes tem 30 dias");
        break;

      case 2:
        printf("esse mes tem 28 dias");
        break;

      default:
        printf("Numero invalida\n");
        break;
    }
    
    
    
    

    


    return 0;
 
}