#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    int resultado;

    printf("digite um numero:");
    resultado = scanf("%d",  &n);

   if(resultado != 1){
    printf("entrada invalida! por favor, digite apenas numeros!");
    return 1;
   }
   
   
    for(int i = 1; i <= 10; i++){
        int resposta = n * i;
        printf("%d x %d = %d\n", n, i, resposta);
    }
    

    
    





    return 0;
 
}