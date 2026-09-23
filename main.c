#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>

int tabuada(int n){
    printf("tabuada do %d\n", n);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero;
    printf("digite um numero para ver a tabuada: ");
    scanf("%d", &numero);
    tabuada(numero);




    return 0;
 
}