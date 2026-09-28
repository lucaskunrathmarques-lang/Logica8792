#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>




    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int contador = 0;

    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            for(int l = 0; l <= 9; l++){
                for(int k = 0; k <= 9; k++){
                    contador++;
                    printf("os possiveis resultados da cadeado: %d %d %d %d\n", i, j, l, k);
                }
            }
        }
    }

    printf("o numero de combinações são de: %d", contador++);

    return 0;
 
}