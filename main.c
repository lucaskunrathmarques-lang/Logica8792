#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>






int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int n[5];
    int soma = 0;

    for(int i = 0; i < 5; i++){
      printf("digite o %d numero: ", i + 1);
      scanf("%d", &n[i]);
      soma = soma + n[i];
    }

    printf("\nsoma = %d\n", soma);

    


      
    
    

    return 0;
 
}