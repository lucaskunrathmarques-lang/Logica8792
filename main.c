#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b, c;

    printf("digite dois numeros");
    scanf("%d %d %d", &a, &b, &c);

    if((a != b) && (b != c)){
        printf("os tres numeros são diferentes\n");
    }else if(b != c){
        printf("os dois numeros sao diferentes\n");
    }else{
        printf("todos os numeros sao iguais.");
    }



    return 0;
 
}