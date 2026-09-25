#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, contador;
    

    printf("digite um numero (0 para parar): \n");
    scanf("%d", &n);

    while(n != 0){
        contador++;
        scanf("%d", &n);
    }

    printf("quantidade de numeros digitados: %d\n", contador);
    
    





    return 0;
 
}