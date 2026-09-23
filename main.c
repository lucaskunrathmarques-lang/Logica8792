#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>

int tabuada(int n){
    int resultado;
    printf("tabuada do %d\n", n);
    for(int i = 1; i <= 10; i++){
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    return resultado;
}
    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int ultimo = tabuada(20);
    printf("ultimo valor da tabuada: %d\n", ultimo);




    return 0;
 
}