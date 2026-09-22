#include<stdio.h>
#include<windows.h>


int somar(int a, int b){
    return a + b;
}
int subtrair(int a, int b){
    return a - b;
}
int dividir(int a, int b){
    if(b <= 0){
        printf("ele precisa ser maior que 0!");
    }else{
        return a / b;
    }
}


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int resultadoSoma = somar(10, 15);
    printf("o resultado da somaé: %d\n", resultadoSoma);
    
    int resultadoSubtração = subtrair(100, 30);
    printf("o resultado da subtração é: %d\n", resultadoSubtração);

    int resultadoDividir = dividir(100, 5);
    printf("o resultado de dividir é: %d\n", resultadoDividir);




    return 0;
 
}